#include <stdio.h>
#define N 10 // useful

int main(void)
{
    short i = 0, a[N];

    printf("Enter %d numbers: \n", N);

    while (i < N)
    {
        scanf("%d", &a[i++]);
    }

    for (i = N - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    return 0;
}

/* NEW WAY TO WRITE THIS PROGRAM */

int main(void) {
    int i, n; 

    printf("How many numbers do you want to reverse? \n");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d numbers: \n", n);

    for ( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    

    for (i = n - 1; i >= 0; i--)
    {
        printf(" %d ", a[i]);
    }
    printf("\n");

    return 0;
}