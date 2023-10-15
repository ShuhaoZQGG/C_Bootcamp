#include <stdio.h>

int main() {
    char mystring[6] = "Hello";  // Declare and initialize a character array

    // Print the characters in reverse
    printf("Reversed string: ");
    for (int i = 4; i >= 0; i--) {
        printf("%c", mystring[i]);
    }
    printf("\n");

    // Print the hidden null terminator
    printf("Hidden null terminator: %d\n", mystring[5]);

    return 0;
}