#include<stdio.h>
main()
{
    int i,n;
    long fact=1;
    printf("enter any number:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
        fact=fact*i;
    printf("factorial %d= %ld",n,fact);
}
