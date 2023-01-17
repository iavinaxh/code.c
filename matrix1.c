// to print the sum of a matrix
#include<stdio.h>
int main()
{
    int i,j,m,n;
int a[m][n];
int b[m][n];
int sum[m][n];
printf("enter the rows in the array");
scanf("%d",&m);
printf("enter the column in the array");
scanf("%d",&n);
printf("enter the values to be inserted in the array");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
{
    scanf("%d",&a[i][j]);
}
//printing the element of the array
for(i=0;i<m;i++)
for(j=0;j<n;j++)
{
    sum[i][j]=a[i][j]+b[i][j];
}
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{printf("%d",sum[i][j]);}
printf("\n");}
return 0;
}