#include<stdio.h>
int power(int,int);
int main()
{
long bit,rem=0,a;
printf("Enter a bit Value :");
scanf("%ld",&bit);
int i=0;
while(bit>0)
{
a=bit%10;
rem=rem+a*power(2,i);
i++;
bit /=10;
}
printf("%d",rem);
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

