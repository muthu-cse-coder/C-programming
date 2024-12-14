#include<stdio.h>
int main()
{
int a[50][50],b[50][50],r,c,i,j;
printf("Enter a Row and Coloumn :");
scanf("%d%d",&r,&c);
printf("Enter a Matrix List :");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("The matrix are :\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf(" %d",a[i][j]);
}
printf("\n");
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
b[j][i]=a[i][j];
}
}
printf("Transpose are :\n");
for(i=0;i<c;i++)
{
for(j=0;j<r;j++)
{
printf(" %d",b[i][j]);
}
printf("\n");
}
}

