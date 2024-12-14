#include<stdio.h>
int main()
{
int row,i,j,space,totalrows;
printf("Enter the rows :");
scanf("%d",&totalrows);
row=totalrows/2+1;
for(i=1;i<=row;i++)
{
for(space=1;space<=row-i;space++)
   printf("  ");
for(j=1;j<=2*i-1;j++)
{
printf(" *");
}
printf("\n");
}
int star=totalrows-2;
space=1;
for(i=row-1;i>=1;i--)
{
for(j=1;j<=space;j++)
  printf("  ");
  space++;
for(j=star;j>=1;j--)
{
  printf("*  ");
  star=star-2;
}     
printf("\n");
}
}
