#include<stdio.h>
int main()
{
    int i,j,num1,num2,gcd;
    printf("enter the no:");
    scanf("%d %d\n",&i,&j);
    for(int i=1;i<=num1 && i<=num2;++i)
    {
        if(num1%i==0 && num2%i==0)
        {
            gcd=i;
        }
        printf("the gcd of the two n0 is:",gcd);
    }
return 0;
}