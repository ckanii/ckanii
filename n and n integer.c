#include<stdio.h>
int main()
{
int array[100],minimum,size,c,location=1;
printf("enter the minimun of elements in array\n");
scanf("%d",&size);
printf("enter %d integers\n",size);
for(c=0;c<size;c++);
scanf("%d",&array[c]);
minimum:array[0];
for(c=1;c<size;c++);
{
if(array[c]<minimum)
{
min=array[c];
location=c+1;
}
}
