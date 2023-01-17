#include<stdio.h>
int main()
{
    int a[30][30];
    int i,j,row,col;
    printf("enter the size of row:");
    scanf("%d",&row);
    printf("enter the size of col:");
    scanf("%d",&col);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i>j)
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
return 0;
}