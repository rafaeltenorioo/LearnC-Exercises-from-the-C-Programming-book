#include <stdio.h>

int main(void)
{

    int hour, min;

    printf("Enter a 24-hour time (hh:mm): ");
    scanf("%d:%d", &hour, &min);

    if (hour >= 0 && hour <= 12)
    {
        printf("Equivalent 12-hour time: %d:%d\n", hour, min);
        
    }
    if (hour > 12 && hour <= 24)
    {
        printf("Equivalent 12-hour time: %d:%d\n", hour - 12, min);

    }
    

}