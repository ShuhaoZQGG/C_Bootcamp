#include <stdio.h>
int main() {
  int age;

  printf("Hello, please enter your age:");
  /*
  &age is used with scanf to pass a pointer to the age variable
   The scanf function is used to read input from the user. In this case, it expects an integer input, so the format specifier is "%d".  
    The & symbol is used to obtain the memory address (a pointer) of the age variable. 
    &age represents the memory location where the age variable is stored. scanf requires a pointer to the variable 
    where it can store the input value. By passing &age, you are telling scanf to store the integer input it reads from the user 
   at the memory location of the age variable. This allows scanf to modify the value of age directly.
   C语言中的&运算符用于获取变量的内存地址（指针）
   使用&获取变量的地址，然后修改它的值
  */ 
  scanf("%d", &age);
  printf("Your age is %d\n", age);

  return 0;
}