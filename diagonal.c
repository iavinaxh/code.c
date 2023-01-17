#include<stdio.h>
int main()
{
    int m,i,j;
    printf("enter the no of rows and column:");
    scanf("%d",&m);
    
    int a[m][m];
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("the matrix is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("diagonal element:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==j)
            {
                printf("%d ",a[i][j]);
            }
            else
            printf("0 ");
        }
        printf("\n");
    }
    return 0;
}