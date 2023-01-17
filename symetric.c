#include<stdio.h>
int mian()
{
    int a[30][30],b[30][30];
    int i,j,row,col,flag=0;
    printf("enter the size of row");
    scanf("%d",&row);
    printf("enter the size of col");
    scanf("%d",&col);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
            a[i][j]==b[i][j];
        }
    }
    if(row==col)
    {
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                if(a[i][j]==b[i][j])
                flag=0;
                else
                flag=1;
            }
        }
    }
    if(flag=0)
    {
        printf("the given matrix is symetric:");
    }    
    else
    {
        printf("the given matrix is non symetric:");
    }    
}