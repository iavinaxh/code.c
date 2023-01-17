// print the table of given no 
#include<stdio.h>
int main()
{
    int i=1,number=0;
    printf("enter a number:");
    scanf("%d",&number);
    do{
        printf("%d\n",(number*i));
        i++;
    }
    while(i<=10);
return 0;
}