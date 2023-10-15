#include <stdio.h>

int main() {
   /*
    % is the format specifier character that indicates that a format specification follows.
    l is a length modifier that tells printf to expect an argument of type unsigned long.
    u specifies that the argument should be treated as an unsigned integer.
   */
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Size of char: %lu byte\n", sizeof(char));

    return 0;
}