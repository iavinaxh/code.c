// wap for hallf pyramid of alphabet
#include<stdio.h>
int main()
{
    int i,j;
    char input,a='A';
    printf("enter the alphabet u want to print in last row:");
    scanf("%c",&input);
    for(i=1;i<=(input-'A'+1);i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",a);
        }
        ++a;
        printf("\n");
    }
return 0;
}