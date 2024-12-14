#include<stdio.h>
int find(int array[],int,int);
int main()
{
int size,array[20],i,search,index;
printf("Enter a Array Size :");
scanf("%d",&size);
printf("Enter a Array Values :");
for(i=0;i<size;i++)
scanf("%d",&array[i]);
printf("Enter the search elements :");
scanf("%d",&search);
printf("Entered the Element list : ");
for(i=0;i<size;i++)
printf("  %d",array[i]);
index= find(array,size,search);
   if(index==-1)
       printf(" \nNot found");
    else
       printf("\nfound values of index : %d",index);
  
}
int find(int array[],int size,int search)
{
int i;
for(i=0;i<size;i++)
{
if(array[i]==search)
   return i; 
}
 return -1;
}


T
