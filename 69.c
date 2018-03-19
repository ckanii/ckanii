#include<stdio.h>
int main()
{
int m=2,n=3,o;
printf("enter the two numbers");
scanf("%d %d",&m,&n);
o=m-n;
if(o%2==0)
{
printf("even");
}
else
{
printf("odd");
}
return 0;
}
