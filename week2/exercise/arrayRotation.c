#include <stdio.h>

int main() {
    int array[5]; // Declare an array of five integers
    int temp;      // Temporary variable to store the last element

    // Prompt the user to enter five integers
    printf("Enter five integers, one at a time:\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Rotate the array to the right
    temp = array[4]; // Store the last element in temp

    for (int i = 4; i > 0; i--) {
        array[i] = array[i - 1]; // Shift elements to the right
    }

    array[0] = temp; // Place the last element at the beginning

    // Display the rotated array
    printf("Rotated array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}




