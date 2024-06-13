
#include<stdio.h>
main()
{
    int i,n,sum=0;
    printf("How many number:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
        sum=sum+i*(i+1)*(i+2);
    printf("sum=%d",sum);

}

