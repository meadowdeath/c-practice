#include <stdio.h>

#define UPC_WEIGHT 3
#define DECIMAL_BASE 10
#define CHECK_DIGIT_COMPLEMENT 10

int main(void)
{
  int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5,
      first_sum, second_sum, total;

  printf("Enter the first 11 digits of a UPC: ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5);
  
  first_sum = d + i2 + i4 + j1 + j3 + j5;
  second_sum = i1 + i3 + i5 + j2 + j4;
  total = UPC_WEIGHT * first_sum + second_sum;
  
  // Original formula: 9 - ((total - 1) % 10)
  // Simplified formula: (10 - (total % 10)) % 10
  printf("Check digit: %d\n", (CHECK_DIGIT_COMPLEMENT - (total % DECIMAL_BASE)) % DECIMAL_BASE);
  
  return 0;
}