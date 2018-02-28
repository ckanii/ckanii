#include<stdio.h>
#include<conio.h>
void main()
{
char c[100];
int i,f=0;
gets(c);
if(i=0;i<100;i++)
{
if(((a[i]>'a'&&a[i]<'a')||(a[i]>'A'&&a[i]<'Z'))&&(a[i]>'0'&&a[i]<'9'))
{
f=1;
break;
}
}
if(f==0)
printf("yes");
else
printf("no");
getch();
}
