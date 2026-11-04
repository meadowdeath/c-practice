# Use a minimal Debian base image.
# "slim" removes many packages that are unnecessary for this C development environment.
FROM debian:bookworm-slim

# Install only the tools required for C development:
# - gcc: C compiler
# - libc6-dev: C standard library headers and development files
# - make: build automation tool
# - gdb: debugger
#
# --no-install-recommends prevents APT from installing optional packages.
# The APT package lists are removed afterwards to reduce the final image size.
RUN apt-get update && \
    apt-get install -y --no-install-recommends \
        gcc \
        libc6-dev \
        make \
        gdb \
    && rm -rf /var/lib/apt/lists/*

# Create an unprivileged development user.
# Match the UID and GID of the host user.
RUN groupadd --gid 1000 developer && \
    useradd --uid 1000 \
            --gid 1000 \
            --create-home \
            --shell /bin/bash \
            developer

# Run development processes as the unprivileged user.
USER developer

# Set /workspace as the default directory inside the container.
# The host directory containing the C source files will be mounted here.
WORKDIR /workspace

# Start an interactive Bash shell when no other command is provided.
CMD ["/bin/bash"]
