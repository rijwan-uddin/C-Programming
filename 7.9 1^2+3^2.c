#include<stdio.h>
main()
{
    int i,n,sum=0;
    printf("How many number:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
        sum=sum+(2*i-1)*(2*i-1);
    printf("sum=%d",sum);

}

