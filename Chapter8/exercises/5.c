#include <stdio.h>

int main(void) {
    int n;

    printf("Enter a number of terms in Fibonacci numbers: \n");
    scanf("%d", &n);


    int fib_num[n];

    fib_num[0] = 0;
    fib_num[1] = 1;

    for (int i = 2; i < n; i++)
    {
        fib_num[i] = fib_num[i - 1] + fib_num[i - 2];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d, ", fib_num[i]);
    }
    

    return 0;
}