// program to find the sum of 10 natural numbers
#include<stdio.h>
int main()
{
    int j,sum=0;
    printf("the first 10 natural numbers is:\n");
    for(j=1;j<=10;j++)
    {
        sum=sum+j;
        printf("%d\n",j);
    }
    printf("\nthe sum is ;%d\n",sum);
return 0;    
}
