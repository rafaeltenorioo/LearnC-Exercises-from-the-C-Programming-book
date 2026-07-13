#include <stdio.h>

int main(void) {
    int x, last, first;

    printf("Enter a two-digit number: ");
    scanf("%d", &x);

    last = x % 10;
    first = x / 10;

    printf("The reversal is: %d%d \n", last, first);

    return 0;
}