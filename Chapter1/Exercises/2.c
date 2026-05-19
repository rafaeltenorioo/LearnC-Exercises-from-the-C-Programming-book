#include <stdio.h>

int main() {
    int r;

    printf("Enter the value of the radius: \n");
    scanf("%d", &r);

    printf("The volume of the sphere is: %.2f\n", (4 / 3) * 3.14f * r * r * r);

    return 0;
}