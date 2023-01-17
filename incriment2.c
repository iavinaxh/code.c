#include<stdio.h>
int main()
{
    int a=10,b=11,c=12,d=13;
    b=c++;//b=12,c=13
    c=a++;//c=10,a=11
    d=++c;//c=11,d=11
    a=++a;//a=12
    b=c++;//b=11,c=12
    c=--a;//c=11,a=11
    d=d++;//d=11
    printf("%d,%d,%d,%d",a,b,c,d);//a=11,b=11,c=11,d=11
    return 0;
}