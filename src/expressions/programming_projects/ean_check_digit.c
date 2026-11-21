#include <stdio.h>

#define EAN_WEIGHT 3
#define DECIMAL_BASE 10
#define CHECK_DIGIT_COMPLEMENT 10

int main(void)
{
  int i1, i2, i3, i4, i5, i6, j1, j2, j3, j4, j5, j6,
      first_sum, second_sum, total;

  printf("Enter the first 12 digits of a EAN: ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5, &i6, &j1, &j2, &j3, &j4, &j5, &j6);
  
  first_sum = i2 + i4 + i6 + j2 + j4 + j6;
  second_sum = i1 + i3 + i5 + j1 + j3 + j5;
  total = EAN_WEIGHT * first_sum + second_sum;
  
  // Original formula: 9 - ((total - 1) % 10)
  // Simplified formula: (10 - (total % 10)) % 10
  printf("Check digit: %d\n", (CHECK_DIGIT_COMPLEMENT - (total % DECIMAL_BASE)) % DECIMAL_BASE);
  
  return 0;
}