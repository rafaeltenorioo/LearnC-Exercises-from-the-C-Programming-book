#include <stdio.h>

#define FREEZING 32.0f
#define SCALE 5.0f / 9.0f


int main(void) {
    float fahrenheit, celsius;

    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - FREEZING) * SCALE;

    printf("The temperature in Celsius is: %.2f\n", celsius);

    return 0;
}