/*#include<stdio.h>
int main()
{
int a,b,gcd,i;
printf("Enter a To Number :");
scanf("%d%d",&a,&b);
for(i=1;i<=a && i<=b;i++)
{
 if(a%i==0 && b%i==0)
    gcd=i;
}
printf("GCD is :%d",gcd);
}
*/
#include<stdio.h>
int findGcd(int,int);
int main()
{
int a,b ,gcd=0;
printf("Enter a  two number :");
scanf("%d%d" ,&a,&b);
gcd=findGcd(a,b);
printf("GCD of :%d",gcd);
}
int findGcd(int a,int b)
{
  if(a==0)
    return b;
   findGcd(b%a,a);
   }


