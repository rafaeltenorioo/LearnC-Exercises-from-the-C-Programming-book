#include <stdio.h>

#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100

int main(void)
{
    int rate, years, a[5];

    printf("Enter interest rate: \n");
    scanf("%d", &rate);

    printf("Enter number of years: \n");
    scanf("%d", &years);

    printf("Years %10d%% %10d%% %10d%% %10d%% %10d%% \n", rate, rate + 1, rate + 2, rate + 3, rate + 4);
    for (short i = 0; i < 5; i++)
    {
        printf("%d %10d %10d %10d %10d %10d \n", i + 1, (100), rate + 2, rate + 3, rate + 4);
    }

    return 0;
}