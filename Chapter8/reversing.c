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