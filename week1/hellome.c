#include <stdio.h>
int main() {
  // The "name" array has a size of 15 characters
  char name[15];
  printf("Hello, please enter your name:");
  scanf("%s", name);
  printf("Your name is %s\n", name);

  return 0;
}