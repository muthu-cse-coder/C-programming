/*#include<stdio.h>
int main()
{
int num;
printf("Enter a Number :");
scanf("%d",&num);
if(num&1)
  printf("LSB is Set");
else
  printf("LSB is Not Set");
 } 
 */
 //Count trailling
 #include<stdio.h>
 int main()
 {
 int num=2,count=0;
 while(!(num&1))
 {
 count++;
 num >>=1;
 }
 printf("Count is :%d",count);
 }
 
