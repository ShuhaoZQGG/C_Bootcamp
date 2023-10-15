#include <stdio.h>

int main() {
    int array1[3]; // First integer array
    int array2[3]; // Second integer array
    int concatenatedArray[6]; // Concatenated integer array

    // Prompt the user to enter three integers for the first array
    printf("Enter three integers for the first array, one at a time:\n");
    for (int i = 0; i < 3; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &array1[i]);
    }

    // Prompt the user to enter three integers for the second array
    printf("Enter three integers for the second array, one at a time:\n");
    for (int i = 0; i < 3; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &array2[i]);
    }

    // Concatenate the two arrays
    for (int i = 0; i < 3; i++) {
        concatenatedArray[i] = array1[i];
        concatenatedArray[i + 3] = array2[i];
    }

    // Display the concatenated array
    printf("Concatenated array: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", concatenatedArray[i]);
    }
    printf("\n");

    return 0;
}