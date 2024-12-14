/*
// Sample Increment using pointer
#include<stdio.h>
void incr(int *);
int main()
{
int a=7,*p;
incr(&a);
printf("%d",a);
}
void incr(int *p)
{
(*p)++;
}

// swap two number using pointer
#include<stdio.h>
void swap(int *,int *);
int main()
{
int a=4,b=8;
printf("After Variable :a=%d b=%d",a,b);
swap(&a,&b);
printf("\nBefore :a=%d b=%d",a,b);
}
void swap(int *p1,int *p2)
{
int t;
t=*p1;
*p1=*p2;
*p2=t;
}
//sum array more than one values return
#include<stdio.h>
int sumarray(int a[]);
int main()
{
int a[5],i,sum1,sum=0;

sum1=sumarray(a);
printf("Sum of array :");
for(int i=0;i<5;i++)
sum=sum+a[i];
printf("  %d",sum);
}
int sumarray(int a[])
{
int i;
printf("Enter the list :");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
}*/
#include<stdio.h>
int  *getarray(int []);
int main()
{
int a[5],*p;
p=getarray(a);
printf("Array Elements are :");
for(int i=0;i<5;i++)
printf("%d ",*(p+i));
}
int *getarray(int a[])
{
int i;
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
return a;
}
