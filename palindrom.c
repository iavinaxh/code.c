#include<stdio.h>
int main()
{
    int rem,n,sum=0,temp;
    printf("input the number:");
    scanf("%d",&n);
    temp=n; //temp=181
    while(n>0) //1>0
    {
        rem=n%10; //1
        sum=(sum*10)+rem; //181
        n=n/10; //1
    }
    if(temp==sum)
    {
        printf("the given no. by u is a palindrom number\n");
    }
    else{
        printf("given no is not a palindrom no.\n");
    }
return 0;
}