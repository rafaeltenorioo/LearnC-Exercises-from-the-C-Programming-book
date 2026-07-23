#include <stdio.h>

int main(void)
{

    int i = 0;
    char ch;

    printf("Enter a message: ");
    // ch = getchar();

    while (getchar() != '\n')
    {
        i++;
        // getchar();
    }
    printf("Your message was %d character(s) long. \n", i);

    return 0;
}