#include<stdio.h>
int main()
{
    //declaration of an array
    int age[6];
    age[0]=19;
    age[1]=22;
    age[2]=18;
    age[3]=17;
    age[4]=20;
    age[5]=24;
    //traversing of the array
    for(int i=0;i<6;i++)
    {
        printf("%d\n",age[i]);
    }
return 0;
}