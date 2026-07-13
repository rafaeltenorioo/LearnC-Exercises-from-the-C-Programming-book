#include <stdio.h>

int main(void) {

    int d, m, y;

    printf("Enter a date in the formatted: dd/mm/yyyy");
    scanf("%d/%d/%d", &d, &m, &y);

    printf("You entered the date: %d%d%d", d, m, y);



    return 0;
}