#include <stdio.h>

int main(void)
{
    int a, b, m, n, rem;
    printf("Enter a fraction: \n");
    scanf("%d/%d", &a, &b);

    m = a;
    n = b;
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
    printf("In lowest terms: %d/%d \n", a/m, b/m);

    return 0;
}