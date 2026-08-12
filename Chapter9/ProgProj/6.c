#include <stdio.h>

int p_x(int x, int k);

int main(void)
{
    int x;

    printf("Enter a value for x and see the value of the polynomial 3x⁵ + 2x⁴ - 5x³ - x² + 7x - 6: \n");

    scanf("%d", &x);

    printf("%d \n", 3*p_x(x, 5) + 2*p_x(x, 4) - 5*p_x(x, 3) - p_x(x, 2) + 7*p_x(x, 1) - 6);

    return 0;
}

int p_x(int x, int k) {
    for (int i = 0; i < k; i++)
    {
        x *= 1 ;
    }
    return x;
}