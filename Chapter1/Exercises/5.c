#include <stdio.h>

int main(void) {
    int x;

    printf("Enter a value for x and see the value of the polynomial 3x⁵ + 2x⁴ - 5x³ - x² + 7x - 6: \n");
    scanf("%d", &x);

    printf("The value of the polynomial is: %d\n", (3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x) -( x * x) + (7 * x) - 6);

    return 0;
}