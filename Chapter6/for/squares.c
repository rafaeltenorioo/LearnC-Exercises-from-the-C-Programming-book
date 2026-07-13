#include <stdio.h>

int main (void) {
    int n;

    printf("This program prints a table of squares\n");
    printf("Enter numer of entries in table\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%10d%10d\n", i, i*i);

    }
    

    return 0;
}