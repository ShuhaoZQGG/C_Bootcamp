#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    // Prompt the user to enter the temperature in Fahrenheit
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Convert Fahrenheit to Celsius
    celsius = (fahrenheit - 32) * 5/9;

    // Display the temperature in Celsius
    printf("%.2f degrees Fahrenheit is equal to %.2f degrees Celsius.\n", fahrenheit, celsius);

    return 0;
}