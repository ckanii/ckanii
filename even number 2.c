#include<stdio.h>
int main()
{
int x,y,rem,i;
printf("give the first no for the range :\n");
scanf("%d,&x);
printf("give the final number the range:\n");
scanf("%d",&y);
printf("\n the even numbers between%d and %d are",y);
for(i=x;i<=y;i++)
{
rem=i%2;
if(rem==0)
printf("\n%d",i);
}
return0;
}
