#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int n = 0;
    char word[100], ch;

    printf("Enter a message: \n");

    while ((ch = getchar()) != '\n')
    {
        word[n] = toupper(ch);
        n++;
    }

    for (int i = 0; i < n; i++)
    {

        switch (word[i])
        {
        case 'A':
            word[i] = '4';
            break;
        case 'B':
            word[i] = '8';
            break;
        case 'E':
            word[i] = '3';
            break;
        case 'I':
            word[i] = '1';
            break;
        case 'O':
            word[i] = '0';
            break;
        case 'S':
            word[i] = '5';
            break;
        }
    }

    printf("In B1FF-speak: ");
    for (int i = 0; i < n; i++)
    {
            printf("%c", word[i]);
        
    }
    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%c", '!');
    }

    return 0;
}