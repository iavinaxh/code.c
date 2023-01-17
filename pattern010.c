/* wap to print the following pattern
0
10
010
1010
01010
*/
#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=i;j>=1;j--)
        {
            if(j%2==0)
            printf("1");
            else
            printf("0");
        }
        printf("\n");
    }
return 0;
}