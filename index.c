#include<stdio.h>
#define max size 1000
int main()
{
int arr[max,size];
int i,n;
printf("enter the size of array :");
scanf("%d",&n);
printf("enter %d elements in the array :",n);
for(i=0;i<n;i++)
printf("%d",arr[i]);
}
return 0;
}
