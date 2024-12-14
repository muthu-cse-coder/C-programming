#include<stdio.h>
#include<math.h>
int main()
{
int base,exponent,res=1;
printf("Enter a Base :");
scanf("%d",&base);
printf("Enter a Exponent :");
scanf("%d",&exponent);
while(exponent>0)
{
res=res*base;
exponent--;
}
printf("%d",res);
}

