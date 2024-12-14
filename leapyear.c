#include<stdio.h>
int main()
{
int year;
printf("Enter a Year :");
scanf("%d",&year);
if(year%4==0)
{
if(year%400==0 || year%100!=0)
{
printf("Leap year");
}
else
{
printf("Non Leap Year");
}
}
else
{
printf("Non Leap Year");
}
}
