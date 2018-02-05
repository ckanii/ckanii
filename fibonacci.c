#include <stdio.h>
int main()
{
	int n,k=1,a=1,i,m;
	printf("enter LIMIT");
	scanf("%d",&n);
	for(i=0;i<n-2;i++)
	{
m=k+a;
k=a;
a=m;
	}

	return 0;
}
