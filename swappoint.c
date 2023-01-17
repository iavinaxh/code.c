#include <stdio.h>
int main()
{
    int a,b;
    printf("enter the values of a: ");
    scanf("%d",&a);
    printf("enter the value of b: ");
    scanf("%d",&b);
    int *p=&b;
    int *q=&a;
    printf("value of a is %d and b is %d\n",a,b);
    printf("by swapping the values of a is %d and of b is %d",*p,*q);
}