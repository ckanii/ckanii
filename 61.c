#include <stdio.h>
#include<string.h>
int main(void)
{
	char a[37],b[69];
	int i,m;
	printf("enter the string");
	scanf("%s",a);
	printf("enter the m values");
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		b[i]=a[i];
	}
		printf("%s",b);
	
	
	return 0;
}
