#include<stdio.h>
int main()
{
int size,array[100],i,j,temp;
printf("Enter a Size of array :");
scanf("%d",&size);
printf("Enter the array list :");
for(i=0;i<size;i++)
{
scanf("%d",&array[i]);
}
for(i=0;i<size;i++)
{
for(j=i+1;j<size;j++)
{
if(array[i]>array[j])
{
temp=array[i];
array[i]=array[j];
array[j]=temp;
}
}
}
printf("Sorted array Elements are :");
for(i=0;i<size;i++)
printf(" %d",array[i]);
}
