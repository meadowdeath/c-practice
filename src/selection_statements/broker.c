/* Calculates a broker's commission */
#include <stdio.h>

// Trade value thresholds
#define TIER_1_LIMIT 2500.00f
#define TIER_2_LIMIT 6250.00f
#define TIER_3_LIMIT 20000.00f
#define TIER_4_LIMIT 50000.00f
#define TIER_5_LIMIT 500000.00f

// Fixed commission amounts
#define TIER_1_BASE_FEE 30.00f
#define TIER_2_BASE_FEE 56.00f
#define TIER_3_BASE_FEE 76.00f
#define TIER_4_BASE_FEE 100.00f
#define TIER_5_BASE_FEE 155.00f
#define TIER_6_BASE_FEE 255.00f

// Commission rates
#define TIER_1_RATE 0.017f
#define TIER_2_RATE 0.0066f
#define TIER_3_RATE 0.0034f
#define TIER_4_RATE 0.0022f
#define TIER_5_RATE 0.0011f
#define TIER_6_RATE 0.0009f

// Minimum allowed commission
#define MINIMUM_COMMISSION 39.00f 

int main(void)
{
    float commission, value;

    printf("Enter value of trade: ");
    scanf("%f", &value);

    if (value < TIER_1_LIMIT)
    {
        commission = TIER_1_BASE_FEE + TIER_1_RATE * value;
    }
    else if (value < TIER_2_LIMIT)
    {
        commission = TIER_2_BASE_FEE + TIER_2_RATE * value;
    }
    else if (value < TIER_3_LIMIT)
    {
        commission = TIER_3_BASE_FEE + TIER_3_RATE * value;
    }
    else if (value < TIER_4_LIMIT)
    {
        commission = TIER_4_BASE_FEE + TIER_4_RATE * value;
    }
    else if (value < TIER_5_LIMIT)
    {
        commission = TIER_5_BASE_FEE + TIER_5_RATE * value;
    }
    else
    {
        commission = TIER_6_BASE_FEE + TIER_6_RATE * value;
    }

    if (commission < MINIMUM_COMMISSION)
    {
        commission = MINIMUM_COMMISSION;
    }
  
    printf("Commission: $%.2f\n", commission);

    return 0;
}
