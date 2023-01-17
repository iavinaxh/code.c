// write a c program to take marks of 5 subjects from user and print his percentage.
#include <stdio.h>
int main()
{
    int a,b,c,d,e,f,g;
    printf("enter subject 1=");
    scanf("%d",&a);
    printf("enter subject 2=");
    scanf("%d",&b);
    printf("enter subject 3=");
    scanf("%d",&c);
    printf("enter subject 4=");
    scanf("%d",&d);
    printf("enter subject 5=");
    scanf("%d",&e);
    f=a+b+c+d+e;
    g=f/5;
    printf("percentage=%d",g);
    return 0;
}