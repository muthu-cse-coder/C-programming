#include<stdio.h>
int main()
{
int rows,num;
printf("Enter a Rows :");
scanf("%d",&rows);
num=1;
for(int i=1;i<=rows;i++)
{
for(int j=1;j<=i;j++)
{
printf("  %d",num++);
}
printf("\n");
}
return 0;
}

