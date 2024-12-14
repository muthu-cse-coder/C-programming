#include<stdio.h>
int power(int,int);
int main()
{
int num,digit=0,temp;
printf("Enter a Number :");
scanf("%d",&num);
temp=num;
for(int i=num;i>0;i=i/10)
{
   digit++;
}
int sum=0;
while(num>0)
{
sum=sum + power(num%10,digit);
num /=10;
}
if(temp==sum)
 printf("Strong Number");
else
 printf("Not a Strong Number");
return 0;
}
int power(int a,int b)
{
int power=1;
while(b>0)
{
power=power*a;
b--;
}
}
