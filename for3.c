// program in c to read 10 numbers from the keboard and find their sum and average
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    float avg;
    printf("input the 10 numbers;\n");
    for(i=1;i<=10;i++)
    {
        printf("number%d\n",i);
        scanf("%d",&n);
        sum+=n;
    }
    avg=sum/10.0;
    printf("the sum of 10 no. is%d\n the average is %f\n",sum,avg);
return 0;    
}