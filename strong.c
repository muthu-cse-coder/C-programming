#include<stdio.h>
int fact(int);
int main()
{
int num,temp,sum=0,digit;
printf("Enter a Number :");
scanf("%d",&num);
temp=num;
while(num!=0)
{
digit=num%10;
sum=sum+fact(digit);
num=num/10;
}
if(temp==sum)
 printf("strong Number");
else
 printf("Not a Strong number");
 }
int fact(int n)
{
int fact=1;
for(int i=n;i>=1;i--)
{
fact=fact*i;
}
return fact;
}



