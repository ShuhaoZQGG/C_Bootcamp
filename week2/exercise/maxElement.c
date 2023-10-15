#include <stdio.h>

int main() {
    int array[5]; // Declare an array of five integers
    int max;       // Declare a variable to store the maximum element

    // Prompt the user to enter five integers
    printf("Enter five integers, one at a time:\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &array[i]);

        // Update max if the entered value is greater
        if (i == 0 || array[i] > max) {
            max = array[i];
        }
    }

    // Display the maximum element
    printf("The maximum element in the array is: %d\n", max);

    return 0;
}