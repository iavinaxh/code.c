/* wap to print the pattern 
A
BC
DEF
GHIJ
KLMNO
PQRSTU */
#include<stdio.h>
int main()
{
    int i,j,n;
    char a='A';
   printf("enter the alphhabet u want in last row");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",a); a++;
        }
       
        printf("\n");
    }

return 0;
}