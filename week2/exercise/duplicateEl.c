#include <stdio.h>

int main() {
    int array[6]; // Declare an array of six random integers

    // Prompt the user to enter six random integers
    printf("Enter six random integers, one at a time:\n");
    for (int i = 0; i < 6; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Find and display duplicate elements
    printf("Duplicate elements in the array: ");
    for (int i = 0; i < 6; i++) {
        for (int j = i + 1; j < 6; j++) {
            if (array[i] == array[j]) {
                printf("%d ", array[i]);
                break; // Avoid duplicate output
            }
        }
    }
    printf("\n");

    return 0;
}