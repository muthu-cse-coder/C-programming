#include<stdio.h>
int main()
{
int a,b ,mul,step;
printf("Enter a Two Number :");
scanf("%d%d",&a,&b);
mul=a<b ? a:b;
step=mul;
while(1)
{
if(mul%a==0 && mul%b==0)
 break;
 mul=mul+step;
 }
 printf("%d is LCM",mul);
 }
