#include <stdio.h>
int main()
{
    int a[50][50];
    int i,j,row,col,counter=0;
    printf("enter the number of rows");
    scanf("%d",&row);
    printf("enter the numbers of rows");
    scanf("%d",&col);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==0)
            {counter=counter+1;}
        }
    }
    if(counter>(row*col)/2)
    {
        printf("this matrix is a sparse matrix");
    }
    else
    {
        printf("this is not a sparse matrix");
    }
    return 0;
}