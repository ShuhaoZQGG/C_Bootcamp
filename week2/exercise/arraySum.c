#include <stdio.h>

int main() {
    int array[5]; // Declare an array of five integers
    int sum = 0;  // Initialize the sum to 0

    // Prompt the user to enter five integers
    printf("Enter five integers, one at a time:\n");
    
    for (int i = 0; i < 5; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &array[i]);
        
        // Add the entered integer to the sum
        sum += array[i];
    }

    // Display the sum of the elements
    printf("The sum of the elements is: %d\n", sum);

    return 0;
}