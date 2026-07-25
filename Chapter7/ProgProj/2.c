#include <stdio.h>

int main(void)
{
    int i, n;

    printf("This program prints a table of squares\n");
    printf("Enter numer of entries in table\n");
    scanf("%d", &n);

    i = 1;

    while (i <= n)
    {
        if (i % 24 == 0)
        {
            printf("Press Enter to continue...\n");
            getchar();

            while (getchar() != '\n')
            {
            }
        }

        printf("%10d%10d\n", i, i * i);
        i++;
    }
    return 0;
}