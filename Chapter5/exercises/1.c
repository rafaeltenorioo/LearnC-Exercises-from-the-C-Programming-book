#include <stdio.h>

int main(void) {

    int i, j , k;

    i = 2; 
    j = 3;
    k = i * j ==  6; // will return true (1)
    printf("%d\n", k);

    i = 5; 
    j = 10;
    k = 1; 
    printf("%d\n", k > i < j);

    i = 3; 
    j = 2;
    k = 1; 
    printf("%d\n", (i % j) + (i < k));


    return 0;
}