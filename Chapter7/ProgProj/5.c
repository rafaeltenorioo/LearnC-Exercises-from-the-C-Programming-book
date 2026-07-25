#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    int n = 0;

    printf("Enter a word: \n");

    while ((ch = getchar()) != '\n')
    {
        switch (toupper(ch))
        {
        case 'A':
        case 'E':
        case 'I':
        case 'L':
        case 'N':
        case 'O':
        case 'R':
        case 'S':
        case 'T':
        case 'U':
            n++;
            break;
        case 'D':
        case 'G':
            n += 2;
            break;
        case 'B':
        case 'C':
        case 'M':
        case 'P':
            n += 3;
            break;
        case 'F':
        case 'H':
        case 'V':
        case 'W':
        case 'Y':
            n += 4;
            break;
        case 'K':
            n += 5;
            break;
        case 'J':
        case 'X':
            n += 8;
        case 'Q':
        case 'Z':
            n += 10;
            break;
        default:
            break;
        }
    }
    printf("Scrabble value: %d \n", n);
    return 0;
}