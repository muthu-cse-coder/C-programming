#include<stdio.h>
int power(int,int);
int main()
{
long base, rev=0,a,b,temp;
printf("Enter a Base values :");
scanf("%ld",&base);
temp=base;
while(base!=0)
{
a=base%10;
rev=rev*10+a;
base /=10;
}
b=power(temp,rev);
printf("power values :%ld",b);
printf("%ld",rev);
}
int power(int a,int b)
{
long power=1;
while(b!=0)
{
power=power*a;
b--;
}
}
