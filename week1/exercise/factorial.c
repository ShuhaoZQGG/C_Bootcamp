#include <stdio.h>

int main() {
    int num;
    unsigned long long factorial = 1;

    // Prompt the user to enter an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check for negative input
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate the factorial
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }

        // Display the factorial
        printf("The factorial of %d is %llu\n", num, factorial);
    }

    return 0;
}