#include<stdio.h>
int main()
{
int n,a,r,s=0;
clrscr();
print f("\n enter the number ");
scanf("%d",&n);
a=n;
while(n>0)
{
r=n%10;
s=s*10+r;
n=n/10;
}
if(a==s)
{
print f("\n%d is not a palindrome number",a);
}
getch();
}
