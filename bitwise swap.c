#include<stdio.h>
int main()
{
    int i=45;
    int k=65;
    printf("value of i=%d,k=%d",i,k);
    i=i^k;
    k=i^k;
    i=i^k;
    printf("after swaping i=%d,k=%d",i,k);
    return 0;
}

