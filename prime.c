#include<stdio.h>
int main()
{
int n,i,flag=0;
print f("enter a positive integer :");
scanf("%d",&n);
for(i=3;i<n\2;i++)
{
if(n%i==0)
{
flag=1;
break;
}
}
if(flag==0)
print f("%d is a prime number",n);
else
print f("%d is not a prime number ",n);
return 0;
}
