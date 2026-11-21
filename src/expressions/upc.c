/* Computes a Universal Product Code check digit */
#include <stdio.h>

#define UPC_WEIGHT 3
#define DECIMAL_BASE 10
#define CHECK_DIGIT_COMPLEMENT 10

int main(void)
{
  int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5,
      first_sum, second_sum, total;

  printf("Enter the first (single) digit: ");
  scanf("%1d", &d);
  printf("Enter first group of five digits: ");
  scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
  printf("Enter second group of five digits: ");
  scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
  
  first_sum = d + i2 + i4 + j1 + j3 + j5;
  second_sum = i1 + i3 + i5 + j2 + j4;
  total = UPC_WEIGHT * first_sum + second_sum;
  
  // Original formula: 9 - ((total - 1) % 10)
  // Simplified formula: (10 - (total % 10)) % 10
  printf("Check digit: %d\n", (CHECK_DIGIT_COMPLEMENT - (total % DECIMAL_BASE)) % DECIMAL_BASE);
  
  return 0;
}