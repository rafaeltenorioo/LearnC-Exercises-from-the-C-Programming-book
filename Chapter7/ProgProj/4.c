#include <stdio.h>

int main(void)
{

    char ch, n;

    printf("Enter phone number: \n");

    while ((ch = getchar()) != '\n')
    {
        switch (ch)
        {
        case 'A':
        case 'B':
        case 'C':
            n = 2;
            printf("%d", n);
            break;
        case 'D':
        case 'E':
        case 'F':
            n = 3;
            printf("%d", n);
            break;
        case 'G':
        case 'H':
        case 'I':
            n = 4;
            printf("%d", n);
            break;
        case 'J':
        case 'K':
        case 'L':
            n = 5;
            printf("%d", n);
            break;
        case 'M':
        case 'N':
        case 'O':
            n = 6;
            printf("%d", n);
            break;
        case 'P':
        case 'R':
        case 'S':
            n = 7;
            printf("%d", n);
            break;
        case 'T':
        case 'U':
        case 'V':
            n = 8;
            printf("%d", n);
            break;
        case 'W':
        case 'X':
        case 'Y':
            n = 9;
            printf("%d", n);
            break;

        default:
            printf("%c", ch);
            break;
        }
    }
    printf("\n");
    return 0;
}