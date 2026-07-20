#include <stdio.h>

int main(void)
{
    float a, maior = 0;
    for (;;)
    {
        printf("Enter a number: \n");
        scanf("%f", &a);

        if (a <= 0)
        {
            break;
        }

        if (a >= maior)
        {
            maior = a;
        }
    }
    printf("The largest number entered was: %.2f \n", maior);

    return 0;
}