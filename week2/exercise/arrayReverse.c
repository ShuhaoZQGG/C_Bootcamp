#include <stdio.h>

int main() {
    int originalArray[5];  // Declare the original array
    int reversedArray[5];  // Declare the array to store reversed elements

    // Prompt the user to enter five integers into the original array
    printf("Enter five integers, one at a time:\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &originalArray[i]);
    }

    // Reverse the elements and store them in the reversed array
    for (int i = 0; i < 5; i++) {
        reversedArray[i] = originalArray[4 - i];
    }

    // Display the reversed array
    printf("Reversed array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", reversedArray[i]);
    }
    printf("\n");

    return 0;
}