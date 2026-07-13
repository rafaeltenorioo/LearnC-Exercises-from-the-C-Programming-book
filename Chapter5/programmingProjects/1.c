#include <stdio.h>

int main(void)
{

    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0)
    {
        if (number < 10)
        {
            printf("The number %d has 1 digit\n", number);
        }
        else if (number < 99)
        {
            printf("The number %d has 2 digits\n", number);
        }
        else if (number < 999)
        {
            printf("The number %d has 3 digits\n", number);
        }
        else if (number < 9999)
        {
            printf("The number %d has 4 digits\n", number);
        }
    }
    else
    {
        printf("The number %d is negative\n", number);
    }

}