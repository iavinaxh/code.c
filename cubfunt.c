#include<stdio.h>
int cube(int);
int main()
{
    int num;
    printf("enter the number to find its cube");
    scanf("%d",&num);
    int result=cube(num);
    printf("the cube of the number %d is %d",num,result);
}

        int cube(int num)
        {
            int x;
            x=num*num*num;
            return x;
        }      

