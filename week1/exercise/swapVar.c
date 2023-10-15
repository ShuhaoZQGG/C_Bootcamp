#include <stdio.h>

int main() {
    int a, b, temp;

    // Prompt the user to enter values for a and b
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    // Swap the values of a and b
    temp = a;
    a = b;
    b = temp;

    // Display the swapped values
    printf("After swapping, the value of a is %d and the value of b is %d\n", a, b);

    return 0;
}