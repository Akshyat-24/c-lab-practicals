#include <stdio.h>

int main() {
    printf("Name: Akshyat\n");
    printf("Roll No: 2510991394\n");

    float radius, area, circumference;
    // Taking radius as input
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculating area and circumference
    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;

    // Displaying results
    printf("Area of the circle = %.2f\n", area);
    printf("Circumference of the circle = %.2f\n", circumference);
    return 0;
}
