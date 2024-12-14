/**#include<stdio.h>
int main()
{
int num1,num2 ,temp;
printf("Enter a two number:");
scanf("%d%d",&num1,&num2);
temp=num1;
num1=num2;
num2=temp;
printf("The Number 1 is :%d\nThe Number 2 is :%d",num1,num2);
}*/
/*#include<stdio.h>
int main()
{
int num1,num2;
printf("Enter a two number:");
scanf("%d%d",&num1,&num2);
num1=num2+num1;
num2=num1-num2;
num1=num1-num2;
printf("Number 1 is :%d\nNumber 2 is :%d",num1,num2);
}*/
#include<stdio.h>
int main()
{
int num1,num2 ;
printf("Enter a two number:");
scanf("%d%d",&num1,&num2);
num1=num1^num2;
num2=num1^num2;
num1=num1^num2;
printf("Number 1 is :%d\nNumber 2 is :%d",num1,num2);
}
