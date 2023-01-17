// write a c program to swap value of two variables without using third variable.
#include <stdio.h>
int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  printf("value before swap\n a=%d,b=%d",a,b);
  a=a+b;
  b=a-b;
  a=a-b;

  printf("\n  after swap value of a=%d,b=%d",a,b);
  return 0;
}