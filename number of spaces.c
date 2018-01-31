#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[100];
int i=0,l=0,f=1;
printf("enter the any string\n);
for(i=0;str[i]!='\0';i++)
{
l=l+1;
}
printf("there is no character in the string are %d\n",l);
for(i=0;i<=l-1;i++)
{
if(str[i]=='')
{
f=f+1;
}
}
printf("the no of words in string are %d",f);
getch();
}
