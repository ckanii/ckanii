#include<stdio.h>
int main()
{
char ch;
printf("enter the character");
scanf("%c",&ch);
if(ch>='a'&&ch<='z')
{
printf("%n%c is an alphabet",ch);
}
else
{
printf("is not alphabet");
}
return 0;
}
