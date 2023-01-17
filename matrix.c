// to print the values in matrixes
#include<stdio.h>
int main()
{
int m,n,i,j;
printf("enter the rows in the array");
scanf("%d",&m);
printf("enter the column in the array");
scanf("%d",&n);
int a[m][n];
printf("enter the values to be inserted in the array");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
{
    printf("enter the element in [%d][%d]",i,j);
    scanf("%d",&a[i][j]);
}
//printing the element of the array
for(i=0;i<m;i++)
{
    {for(j=0;j<n;j++)
     printf("%d",a[i][j]);
    }    
printf("\n");
}
return 0;
}