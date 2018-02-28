#include<stdio.h>
#include<conio.h>
void main()
{
int num;
printf("\n enter the numbers");
scanf("%d",&num);
if(num%2==0)
{
printf("even:%d",num);
}
else
{
printf("less_even:%d",num);
}
getch();
}
