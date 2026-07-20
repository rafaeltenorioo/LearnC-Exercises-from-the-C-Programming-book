#include <stdio.h>

int main(void)
{
    int m, n, rem;
    printf("Enter two integers: \n");
    scanf("%d %d", &m, &n);

    for (;;)
    {
        if (n == 0)
        {

            break;
        }
        rem = m % n;
        m = n;
        n = rem;
    }

    printf("Greatest common divisor: %d \n", m);

    return 0;
}