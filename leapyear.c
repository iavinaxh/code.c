#include<stdio.h>
int main()
{
    int year,result;
    printf("enter the year=");
    scanf("%d",&year);
    result=year%4;
    if(result==0)
    {
    printf("given year is leap year %d",year);
    }
    else;
    {
    printf("given year is not a leap year");
    }
}