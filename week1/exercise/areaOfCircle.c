#include <stdio.h> // import stdio library
#define M_PI acos(-1.0) // define Pi
#include <math.h> // import math library
int main() { // deeclare a main function
    double radius, area; // declare two variables, radius and area, type double

    // Prompt the user to enter the radius
    printf("Enter the radius of the circle: "); // print
    scanf("%lf", &radius); // ask user to input, and save the input to variable radius

    // Calculate the area
    area = M_PI * pow(radius, 2); // area = pi * r^2

    // Display the result
    printf("The area of the circle with radius %.2lf is %.2lf\n", radius, area);
    // l: long, f: float .2: save 2 decimal places
    return 0;
}