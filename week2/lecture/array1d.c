#include <stdio.h>
int main()
{
  int a [10];
  int count;
  //populate an array
  for (count = 0; count < 10 ; count++)
  {
  a[count] = count * 10 + count;
  }
  printf ("The first and second elements are %d and %d\n", 
  a[0], a[1]);

  // * 运算符可以用来获取指针指向的值，用于访问数组元素
  // (Address-of Operator) & 运算符用于获取变量的内存地址（或指针）。例如，如果有一个变量 x，&x 可以获得 x 存储在计算机内存中的地址。
  // (Dereference Operator) * 运算符用于访问指针指向的内存地址中存储的值。它也被称为解引用运算符。当你使用 * 与指针一起使用时，它允许你处理该内存地址中的值。
  printf ("Or, via pointers, %d and %d\n", *a, *(a+1));
  return 0;
}