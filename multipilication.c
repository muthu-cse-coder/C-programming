#include<stdio.h>
int main()
{
int k,a[10][10],b[10][10],mul[10][10],r,r1,c,c1,i,j;
printf("Enter a Rows and column :");
scanf("%d%d",&r,&c);
printf("Enter a matrix list :");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Entered a matrix list :\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf(" %d",a[i][j]);
}
printf("\n");
}
printf("Enter a 2nd Matrix row and column:");
scanf("%d%d",&r1,&c1);
printf("Enter a 2nd Matrix :");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&b[i][j]);
}
}
printf("Entered a 2nd matrix list :\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf(" %d",b[i][j]);
}
printf("\n");
}
for(i=0;i<r;i++)
{
for(j=0;j<c1;j++)
{
mul[i][j]=0;
for(k=0;k<c;k++)
mul[i][j] += a[i][k]*b[k][j];
}
}
printf("result is :\n");
for(i=0;i<r;i++)
{
for(j=0;j<c1;j++)
{
printf("  %d",mul[i][j]);
}
printf("\n");
}
}
