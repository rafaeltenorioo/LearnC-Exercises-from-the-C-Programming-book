#include <stdio.h>

int main (void) {
    short i, n;

    printf("This program prints a table of squares\n");
    printf("Enter number of entries in table\n");
    scanf("%d", &n);

    i = 1;

    while (i <= n)
    {
        printf("%10hd%10hd\n", i, i*i);
        // I put the "h" before "d" because i'm using the type "short"
        i++;
    }
    return 0;
}