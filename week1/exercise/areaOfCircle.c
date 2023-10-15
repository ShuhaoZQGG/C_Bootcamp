#include <stdio.h>

#define M_PI acos(-1.0)
#include <math.h>
int main() {
    double radius, area;

    // Prompt the user to enter the radius
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    // Calculate the area
    area = M_PI * pow(radius, 2);

    // Display the result
    printf("The area of the circle with radius %.2lf is %.2lf\n", radius, area);

    return 0;
}