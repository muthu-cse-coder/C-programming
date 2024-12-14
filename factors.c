#include<stdio.h>
int main()
{
int num,i;
printf("Enter a Number :");
scanf("%d",&num);
printf("Factors is :");
for(int i=1;i<=num/2;i++)
{
if(num%i==0)
printf("%d ",i);
}
}
