#include<stdio.h>
int main()
{
    int age;
    printf("enter the age");
    scanf("%d",&age);
    if(age>=18)
    {
        float h,w;
        printf("enter the hight");
        scanf("%f",&h);
        printf("enter the weight");
        scanf("%f",&w);
        if((h>5.5)&&(w>55))
        {
            printf("you are eligible ");
        }
        else
        {
            printf("you are not eligible");
        }
    }
    else
    {
        printf("you are not eligible");
    }
return 0;
}