#include<stdio.h>
int main ()
{
int num,bin[32],i=0;
printf("Enter a Decimal Number :");
scanf("%d",&num);
while(num>0)
{
bin[i]=num%2;
num /=2;
i++;
}
for(int j=i-1;j>0;j--)
{
printf("%d",bin[j]);
}
}

