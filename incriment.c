#include<stdio.h>
int main()
{
    int a=10,b=11,c=12,d=13;
    b=c++;
    c=++a;
    d=++c;
    a=b--;
    c=d++;
    printf("%d,%d,%d,%d",a,b,c,d);
    return 0;
}