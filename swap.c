//write a c program to take two values a and b from user and swap thier values.
#include <stdio.h>
int main()
{
  int a,b,;
  printf("value of before swap\n a=%d,b=%d",a,b);
  scanf("%d %d",&a,&b);
  a=a+b;
  b=a-b;
  a=a-b;

  printf("\n swap value of a=%d,b=%d",a,b);
  return 0;
}