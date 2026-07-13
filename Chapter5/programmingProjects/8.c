#include <stdio.h>

int main(void)
{

    int hour, min, totalHoursInMinutes;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &min);

    totalHoursInMinutes = (hour * 60) + min;

    if (totalHoursInMinutes - (8 * 60) < totalHoursInMinutes - ((9 * 60) + 43))
    {
        printf("Closest departure time is 8:00 a.m, arriving at 10:16 a.m\n");
    }
    else
    {
        if (totalHoursInMinutes - ((9 * 60) + 43) < totalHoursInMinutes - ((11 * 60) + 19))
        {
            printf("Closest departure time is 9:43 a.m, arriving at 11:52 a.m\n");
        }
        else
        {
            if (totalHoursInMinutes - ((11 * 60) + 19) < totalHoursInMinutes - ((12 * 60) + 47))
            {
                printf("Closest departure time is 11:19 a.m, arriving at 11:52 a.m\n");
            }
            else
            {
                if (totalHoursInMinutes - ((12 * 60) + 47) < totalHoursInMinutes - (14 * 60))
                {
                    printf("Closest departure time is 12:47 p.m, arriving at 3:00 p.m\n");
                }
                else
                {
                    if (totalHoursInMinutes - (14 * 60) < totalHoursInMinutes - ((15 * 60) + 45))
                    {
                        printf("Closest departure time is 2:00 p.m, arriving at 4: 08 p.m\n");
                    }
                    else
                    {
                        if (totalHoursInMinutes - ((15 * 60) + 45) < totalHoursInMinutes - ((19 * 60) + 0))
                        {
                            printf("Closest departure time is 3:45 p.m, arriving at 5:55 p.m\n");
                        }
                        else
                        {
                            if (totalHoursInMinutes - ((19 * 60) + 0) < totalHoursInMinutes - ((21 * 60) + 45))
                            {
                                printf("Closest departure time is 7:00 p.m, arriving at 9:20 p.m\n");
                            }
                            else
                            {
                                printf("Closest departure time is 9:45 p.m, arriving at 11:58 p.m\n");
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}