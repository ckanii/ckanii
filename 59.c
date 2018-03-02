#include<stdio.h>
#include<conio.h>
int main()
{
int n,i,max,a[10];
printf("enter the elements");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<n;i++)
{
if (a[i]>max)
{
max=a[i];
}
}
printf("enter the max element %d",max);
return 0;
}
