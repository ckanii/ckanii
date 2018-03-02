#include<stdio.h>
int main()
{
int z=0,y=1,x,a,i;
scanf("%d",&a);
for(i=0;i<1;i++)
{
x=z+y;
z=y;
y=z;
}
printf("%d%d",z,y);
return 0;
}
