#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,count=0,b=1,c=2;
printf("\nenter the number:");
scanf("%d",&n);
while(n!=1)
{
n=n/2;
count++;
}
for(i=0;i<=count;i++)
{
b=b*c;
}
{
printf("the nearest greater power of 2 is:%d",b);
}
return 0;
}
