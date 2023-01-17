/* wap to print the following pattern
88888888
7777777
666666
55555
4444
333
22
1
*/
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter the no to print the row");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }

return 0;
}
