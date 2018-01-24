#include<stdio.h>
int main()
{
int l,r,n,a[20],p;
clrscr();
i=o;
r=0;
m=n;
p=(n+1)/2;
for(i=0;i<=n-1;i++)
{
if(i==m)
continue;
else
{
if(a[m]<a[i])
l++;
else
r++;
}
if(l==(p-1)&&r==p)
printf("median is %dth location %d",m,a[m]);
return 0;
}
