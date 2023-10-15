#include <stdio.h> //import library

int main() { // define main() function
  int a; // declare variable a with type integer
  int b; // declare variable b with type integer
  printf("Please enter an integer: "); // print 
  scanf("%d",  &a); //assign the value of input to variable a
  printf("Please enter another integer: "); // print
  scanf("%d", &b); // assign the value of input to variable b
  printf("The result is: %d\n", a + b); // print the sum of two integers a and b
  return 0; // return
}
