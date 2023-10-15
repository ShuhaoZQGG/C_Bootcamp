#include <stdio.h>

int main() {
    double principal, rate, time, interest;

    // Prompt the user to enter the principal amount
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    // Prompt the user to enter the rate of interest
    printf("Enter the rate of interest: ");
    scanf("%lf", &rate);

    // Prompt the user to enter the time in years
    printf("Enter the time (in years): ");
    scanf("%lf", &time);

    // Calculate the simple interest
    interest = (principal * rate * time) / 100.0;

    // Display the calculated simple interest
    printf("Simple interest is: %.2lf\n", interest);

    return 0;
}