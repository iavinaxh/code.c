//  #include<stdio.h>
// int main()
// {
//     int i=-4,j,num;
//     j=(num<0?0:num*num);
//     printf("%d\n",j);
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int j=0;
//     (!j!=1?printf("welcome\n"):printf("good bye\n"));
//     return 0;

// #include<stdio.h>
// int main()
// {
//     int i=1,j;
//     i>=5?(j=10):(j=15);
//     printf("%d %d\n",i,j);
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int a=5,b=6;
//     (a==b ?printf("%d\n",a));//expected expression after 1st condition
//     return 0;
//}
// #include<stdio.h>
// int main()
// {
//     printf("%6.4f,%06.3f,%09.3f,%9.3f,%6.0f,%6.0f",45.6,45.6,45.6,45.6,45.4,45.6);
//     return 0;
// } 
// #include<stdio.h>
// int main()
// {
//     printf("%d,%d,%d,%d\n",15,015,0x15,0X15);
//     return 0;
// } 
// #include<stdio.h>
// int main()
// {
//     printf("%d %c",'A','A');
//     return 0;
// } 
// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter the no of rows:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;++i)
//     {
//         for(int j=1;j<=i;++j)
//         {
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// } 
#include<stdio.h>
// int main()
// {
//     int i,j;
//     char input,a='a';
//     printf("enter the uppercast character u want to print in last row:");
//     scanf("%c",&input);
//     for(i=1;i<=(input-'a'+1);++i)
//     {
//         for(j=1;j<=i;++j)
//         {
//             printf("%c",a);
//         }
//         ++a;
//         printf("\n");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int i,j,n;
//     char a='A';
//    printf("enter the alphhabet u want in last row");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//             printf("%c",a); a++;
//         }
       
//         printf("\n");
//     }

// return 0;
// }
// #include<stdio.h>
// int main()
// {
//     for(int i=1;i<=5;i++)
//     {
//         char a='A';
//         for(int j=1;j<=i;j++)
//         {
//             printf("%c",a);
//             a++;
//         }
//         printf("\n");
//     }
// return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int i,j,n;
//     printf("enter the no to print the row");
//     scanf("%d",&n);
//     for(i=n;i>=1;i--)
//     {
//         for(j=1;j<=i;j++)
//         {
//             printf("%d",i);
//         }
//         printf("\n");
//     }

// return 0;
// }
// #include<stdio.h>
// int main()
// {
//     for(int i=1;i<=5;i++)
//     {
//         for(int j=i;j>=1;j--)
//         {
//             if(j%2==0)
//             printf("1");
//             else
//             printf("0");
//         }
//         printf("\n");
//     }
// return 0;
// #include<stdio.h>
// int main()
// {
//     int a,n,s=0,p=1,a=n;
//     printf("enter a number ");
//     scanf("%d",&n);
//     while(n>0)
//     {
//         int d=n%10;
//         for (int i=1;i<=d;i++)
//         {
//             p=p*i;
//         }
//         s=s+p;
//         p=1;
//         n=n/10;
//     }
//     if(s==a)
//     {
//     printf("it is astrong number");
//     }
//     else
//      printf("it is not a strong no.");
    
//      return 0;
// }

// #include <stdio.h>
// int main()
// {
// int x=3,y=4,z=4;
// printf("ans= %d", (z>=y>=x?100:200));
// return 0;
// }

// #include <stdio.h>
// int main()
// {
// int x=-4,y,z=10;
// y=x%-3;
// y=(y ? 0 : z*z);
// printf("y= %d",y) ;
// return 0;
// }

// #include<stdio.h>
// int main()
// {
// int i = 1, 2, 3;

// printf("%d", i);

// return 0;
// }

// #include <stdio.h>
// int main()
// {
// int a=10,b=10;
// printf("ans= %d",a>b?a*a:b/b);
// return 0;
// }

// #include <stdio.h>
// int main()
// {
// int x=0,y=20;
// x=!!x;
// y=!x&& !y;
// printf("x= %d, y= %d",x,y);
// return 0;
// }

// #include<stdio.h>
// int main()
// {
// int a=2,b=3,c=1,d;
// d=a<b >= c;
// printf("%d",d);
// return 0;
// }

// #include<stdio.h>
// void main()
// {
// int a=23,b=12,c=10,d;
// d=c+2=b+1=a;
// printf("%d %d %d %d",a,b,c,d);

// }

// #include<stdio.h>
// int main()
// {
// int a=10,b=20,c=30;
// c==a==b;
// printf("%d%d%d",a,b,c);
// return 0;
// }

// #include<stdio.h>
//  void main()
// {
// int a=10,b;
// b=a>5?100:200;
// printf("%d",b);
// }

// #include<stdio.h>
// int main()
// {
//     int a=10,b=20,c=30;
// c=(10,20)==(c,b);
// printf("%d",c);


//     return 0;
// }

// 
// #include<stdio.h>
// int main()
// {
//     int i=0;
//     switch (i)
//     {
//     case'0' : printf("GLA");
//     break;
//     case'1': printf("university");
//     break;
//     default: printf("MATHURA");
//     }

// return 0;
// }
// #include<stdio.h>
//  int main()
// {
//     int number;
     
//     printf("Enter a positive integer number: ");
//     scanf("%d",&number);
     
//     switch(number%2)
//     {
//         case 0:
//             printf("%d is an EVEN number.\n",number);
//             break;
//         case 1:
//             printf("%d is an ODD number.\n",number);
//             break;
//     }
     
//     return 0;
// }
// #include <stdio.h>

// int main()
// {
//     int num;

//     /* Input number from user */
//     printf("Enter any number: ");
//     scanf("%d", &num);

//     if(num & 1)
//     {
//         printf("%d is odd.", num);
//     }
//     else
//     {
//         printf("%d is even.", num);
//     }

//     return 0;
// }
// #include <stdio.h>

// int main()
// {
//     int num;

//     /* Input number from user */
//     printf("Enter any number: ");
//     scanf("%d", &num);

//     (num & 1) 
//         ? printf("%d is odd.", num) 
//         : printf("%d is even.", num);

//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     //initialization of an array
//     int age[]={1,2,3,4,5};
//     age[0]=19;
//     age[1]=21;
//     age[2]=16;
//     age[3]=27;
//     age[4]=30;
//     for(int i=0;i<5;i++)
//     {
//         printf("%d\n",age[i]);
//     }
// return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int arr[5]={11,55,41,30,51};
//     int i,j;
//     temp=0;
//     printf("enter the numbers:\n");
//     for(i=0;i<5;i++)
//     {
//         printf("array before sorting");
//         printf("%d",arr[i]);
//     }
//     for(int i=0;i<5;i++)
//     {
//         for(int j=i+1;j<5;j++)
//         {
//             if(arr[i]>arr[j])
//         }
//         {
//             temp=arr[i];
//             arr[i]=arr[j];
//             arr[j]=temp;
//         }
//     }    

// return 0;
// }
// #include<stdio.h>
// int main()
// {
// int m,n,i,j;
// printf("enter the rows in the array");
// scanf("%d",&m);
// printf("enter the column in the array");
// scanf("%d",&n);
// int a[m][n];
// printf("enter the values to be inserted in the array");
// for(i=0;i<m;i++)
// for(j=0;j<n;j++)
// {
//     printf("enter the element in [%d][%d]",i,j);
//     scanf("%d",&a[i][j]);
// }
// //printing the element of the array
// for(i=0;i<m;i++)
// {
//     {for(j=0;j<n;j++)
//      printf("%d",a[i][j]);
//     }    
// printf("\n");
// }
// return 0;
// }
// 
// 
// #include<stdio.h>
// int main()
// {
//     int i,j,n;
//     scanf("%d",&n);
//     for(i=1;i<=n;i=i+1)
//     {printf("%d\n",i);}
//     for(j=1;j<n;j=j+1)
//         {printf("%d\n",j);}

//  return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int a[30][30];
//     int i,j,row,col;
//     printf("enter the size of row");
//     scanf("%d",&row);
//     printf("enter the size of col");
//     scanf("%d",&col);
//     for(i=0;i<row;i++)
//     {
//         for(j=0;j<col;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     for(i=0;i<row;i++)
//     {
//         for(j=0;j<col;j++)
//         {
//             if(i<j)
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
// return 0;
// }
// #include<stdio.h>
// int main() {
//     int a[10][10], b[10][10], c[10][10], n, i, j, k;

//     printf("Enter the value of N (N <= 10): ");
//     scanf("%d", & n);
//     printf("Enter the elements of Matrix-A: \n");

//     for (i = 0; i < n; i++) {
//         for (j = 0; j < n; j++) {
//             scanf("%d", & a[i][j]);
//         }
//     }

//     printf("Enter the elements of Matrix-B: \n");

//     for (i = 0; i < n; i++) {
//         for (j = 0; j < n; j++) {
//             scanf("%d", & b[i][j]);
//         }
//     }

//     for (i = 0; i < n; i++) {
//         for (j = 0; j < n; j++) {
//             c[i][j] = 0;
//             for (k = 0; k < n; k++) {
//                 c[i][j] += a[i][k] * b[k][j];
//             }
//         }
//     }

//     printf("The product of the two matrices is: \n");
//     for (i = 0; i < n; i++) {
//         for (j = 0; j < n; j++) {
//             printf("%d\t", c[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// #include<stdio.h>
// int cube(int);
// int main()
// {
//     int num;
//     printf("enter the number to find its cube");
//     scanf("%d",&num);
//     int result=cube(num);
//     printf("the cube of the number %d is %d",num,result);
// }

//         int cube(int num)
//         {
//             int x;
//             x=num*num*num;
//             return x;
//         }      
// #include <stdio.h>
// int dia(int);
// float circum(int);
// float arr(int);
// int main()
// {
//     int r;
//     printf("enter the value of radius of the circlre:");
//     scanf("%d",&r);
//     int diameter=dia(r);
//     float circumference=circum(r);
//     float area=arr(r);
//     printf("diameter of the circle is :%d\n",diameter);
//     printf("cicumference of the cirle is: %.2f \n",circumference);
//     printf("area of the circle is : %.2f\n",area);
// }
// int dia(int r)
// {
//     int x;
//     x=2*r;
//     return x;
// }
// float circum(int r)
// {
//     float v;
//     v=2*3.14*r;
//     return v;
// }
// float arr(int r)
// {
//     float y;
//     y=3.14*r*r;
//     return y;
// }
// #include <stdio.h>
// int evenorodd(int);
// int main()
// {
//     int a;
//     printf("enter a number to check:");
//     scanf("%d",&a);
//     int result=evenorodd(a);
//     if(result==1)
//     printf("number is even");
//     else
//     printf("number is odd");
// }
// int evenorodd(int n)
// {
//     if(n%2==0)
//     {
//         return 1;
//     }
//     else{return 0;}
// }
#include <stdio.h>
int main()
{
    int a,b;
    printf("enter the values of a: ");
    scanf("%d",&a);
    printf("enter the value of b: ");
    scanf("%d",&b);
    int *p=&b;
    int *q=&a;
    printf("value of a is %d and b is %d\n",a,b);
    printf("by swapping the values of a is %d and of b is %d",*p,*q);
}