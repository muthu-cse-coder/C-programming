#include<stdio.h>
int main()
{
int a=0,b=1,c,n;
printf("Enter a Number :");
scanf("%d",&n);
for(int i=0;i<=n;i++)
{
c=a+b;
printf("\n%d",c);
a=b;
b=c;
}
}
