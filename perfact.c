#include<stdio.h>
int main()
{
int n,res=0;
printf("Enter a Number:");
scanf("%d",&n);
for(int i=1;i<n;i++)
{
if(n%i==0)
res=res+i;
}
if(res==n)
{
printf("Perfact Number");
}
else
{
printf("Not a Perfact Number");
}
}


