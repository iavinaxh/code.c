#include<stdio.h>
int main()
{
    int price[50][50];
    int i,j,row,col;
    printf("enter the size of row in array:");
    scanf("%d",&row);
    printf("enter the size of col in array:");
    scanf("%d",&col);
    for(i=0;i<row;i++)
    for(j=0;j<col;j++)
    {
        scanf("%d",&price[i][j]);
    }
    for(i=0;i<col;i++)
    {for(j=0;j<row;j++)
    {
        printf("the transpose matrix is:");
        printf("%d\n",price[j][i]);
    }
    printf("\n");
    }
    return 0;
}