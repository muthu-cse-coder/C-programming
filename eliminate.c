#include<stdio.h>
int main() 
{
int size,a[100],i,j,k;
printf("Enter a array size :");
scanf("%d",&size);
printf("Enter a elements are :");
for(i=0;i<size;i++)
scanf("%d",&a[i]);
for(i=0;i<size-1;i++)
{
for(j=i+1;j<size;j++)
{
if(a[i]==a[j])
{
for(k=j;k<size;k++)
{
a[k]=a[k+1];
}
size--;
j--;
}
}
}
printf("Eliminate the list of array are :");
for(i=0;i<size;i++)
printf("  %d",a[i]);
}
