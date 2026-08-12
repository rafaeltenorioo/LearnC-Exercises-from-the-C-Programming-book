#include <stdio.h>
#include <ctype.h>

int main(void)
{

    int i = 0;
    char ch;

    printf("Enter a sentence: \n");

    while ((ch = getchar()) != '\n')
    {
        switch (toupper(ch))
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            i++;
            break;
        }
    }
    printf("Your sentence contains %d vowels: \n", i);
    return 0;
}