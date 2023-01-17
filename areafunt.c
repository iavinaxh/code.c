#include <stdio.h>
int dia(int);
float circum(int);
float arr(int);
int main()
{
    int r;
    printf("enter the value of radius of the circlre:");
    scanf("%d",&r);
    int diameter=dia(r);
    float circumference=circum(r);
    float area=arr(r);
    printf("diameter of the circle is :%d\n",diameter);
    printf("cicumference of the cirle is: %.2f \n",circumference);
    printf("area of the circle is : %.2f\n",area);
}
int dia(int r)
{
    int x;
    x=2*r;
    return x;
}
float circum(int r)
{
    float v;
    v=2*3.14*r;
    return v;
}
float arr(int r)
{
    float y;
    y=3.14*r*r;
    return y;
}
