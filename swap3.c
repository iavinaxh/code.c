#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the value of a=");
    scanf("%d",&a);
    printf("enter the value of b=");
    scanf("%d",&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("value of a and b after swapping is:a=%d,b=%d",a,b);
    return 0;
}