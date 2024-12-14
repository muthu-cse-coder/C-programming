/*#include<stdio.h>
#include<string.h>
void main()
{
char s1[10];
printf("Enter a Srting :");
scanf("%s",&s1);
puts(s1);
getch();
}
*/
//palindrom
#include<stdio.h>
#include<string.h>
void main()
{
char s1[50],l,r;
printf("Enter a String :");
gets(s1);
l=0;
r=strlen(s1)-1;
int palindrom=1;
while(l<r)
{
if(s1[l]!=s1[r])
  palindrom=0;
  l++;
  r--;
}
if(palindrom==0)
  printf("Not a palindrom");
 else
  printf("palindrom");
}
