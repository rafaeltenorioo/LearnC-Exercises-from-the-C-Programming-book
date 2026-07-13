#include <stdio.h>

int main(void) {

    int x;

    printf("Enter a value between 0 and 4: ");
    scanf("%d", &x);

    switch (x)
    {
    case 4: printf("Excellent");
        break;
        /* "break" tranfers control to the statement following the switch */
    case 3: printf("Good");
        break;
    case 2: printf("Average");
        break;
    case 1: printf("Poor");
        break;
    case 0: printf("Failing");
        break;
    
    default:
        printf("Illegal number");
        break;
    }

    return 0;
}