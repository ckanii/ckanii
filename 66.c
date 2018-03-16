#include<stdio.h>
int main()
{
int p,n,f=0;
printf("enter the numbers");
scanf("%d",&n);
for(p=2;p<n/2;p++)
{
f=1;
}
if(n%p==0)
{
printf("it is prime number");
}
else
{
printf("not prime number");
}
return 0;
}
