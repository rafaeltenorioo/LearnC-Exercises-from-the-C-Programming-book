#include <stdio.h>

int main(void)
{
    printf("Bytes of int: %d\n", sizeof(int));
    printf("Bytes of short: %d\n", sizeof(short));
    printf("Bytes of long: %d\n", sizeof(long));
    printf("Bytes of float: %d\n", sizeof(float));
    printf("Bytes of double: %d\n", sizeof(double));
    printf("Bytes of long double: %d\n", sizeof(long double));
    
    return 0;
}