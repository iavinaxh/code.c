// write a c program to show working of an atm by takung amount as input from  user and print no. of notes of 2000,500,200,100.
//for eg: user input :3300
               2000:1
               500:2
               200:1
               100:1
// for eg2: user input:12600
               2000:6
               500:1
               200:0
               100:1
#include<stdio.h>
int main()
{
    int amt,amtc,a,b,c,d;
    printf("enter the amount");
    scanf("%d",&amt);
    amtc=amt;
    a=amt/2000;
    amt=amt%2000;
    b=amt/500;
    amt=amt%500;
    c=amt/200;
    amt=amt%200;
    d=amt/100;
    amt=amt%100;
    printf("amount=%d\n2000-%d\n500-%d\n200-%d\n100-%d",amtc,a,b,c,d);
    return 0
}               