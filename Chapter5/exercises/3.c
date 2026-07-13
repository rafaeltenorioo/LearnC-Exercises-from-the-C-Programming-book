#include <stdio.h>

int main(void) {

    int i, j , k;

    i = 3; 
    j = 4;
    k = 5;
    printf("%d\n", i < j || ++j < k); // 1
    printf("%d %d %d \n", i, j, k); // 3 5 5

    i = 7; 
    j = 8;
    k = 9;
    printf("%d\n", i - 7 && j++ < k); // 0
    printf("%d %d %d \n", i, j, k); // 7 9 9

    i = 7; 
    j = 8;
    k = 9;
    printf("%d\n", (i = j ) || (j = k)); // 1




    return 0;
}