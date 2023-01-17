#include<stdio.h>
int main()
{
    int n;
    printf("enter the n:");
    scanf("%d",&n);
    int a[n],temp,i,j;
    for(i=0;i<n;i++)
    {
        printf("%d=",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("after sorting\n");
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);

return 0;
}