#include <stdio.h>

int main(void) {
    int x, last, second, first, firstP ;

    printf("Enter a three-digit number: ");
    scanf("%d", &x);

    last = x % 10;
    firstP = x / 10;
    second = firstP % 10;
    first = firstP / 10; 

    printf("The reversal is: %d%d%d \n", last, second, first);

    return 0;
}