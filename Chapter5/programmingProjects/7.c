#include <stdio.h>

int main(void)
{

    int x, y, z, w;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &x, &y, &z, &w);

    printf("Largest: %d\n", x > y ? (x > z ? (x > w ? x : w) : (z > w ? z : w)) : ((y > z ? (y > w ? y : w) : (z > w ? z : w))));

    printf("Smallest: %d\n", x < y ? ((x < z ? (x < w ? x : w) : (z < w ? z : w))) : ((y < z ? (y < w ? y : w) : (z < w ? z : w))));

    
   
    return 0;
}