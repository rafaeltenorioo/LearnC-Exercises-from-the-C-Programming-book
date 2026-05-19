#include <stdio.h>

int main(void) {
    int amount;

    printf("Enter the amount of money: \n");
    scanf("%d", &amount);

    printf("The amount of money with tax of 5%% is: %.2f\n", amount * 1.05f);


    return 0;
}