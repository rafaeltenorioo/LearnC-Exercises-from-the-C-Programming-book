#include <stdio.h>

#define N 10

void selection_sort(int k, int a[]);

int main(void)
{
    int array[N];

    printf("Enter a series of %d integers: \n", N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &array[i]);
    }

    /*
    int spaces = 0;
    */

    selection_sort(N, array);

    printf("Serie in a sort way: ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

void selection_sort (int k , int a[]) {

    if (k <= 1)
    {
       return;
    }
    
    int max_index = 0;
    for (int i = 1; i < k; i++)
    {
        if (a[i] > a[max_index])
        {
            max_index = i;
        }   
    }
    int temp = a[max_index];
    a[max_index] = a[k - 1];
    a[k - 1] = temp;

    selection_sort(k - 1, a);
}