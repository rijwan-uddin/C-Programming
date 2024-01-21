#include<stdio.h>
main()
{
    int i,n,sum=0;
    printf("How many number:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
      sum=sum+2*i;
       printf("sum=%d",sum);

}

