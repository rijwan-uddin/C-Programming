#include<stdio.h>
main()
{
    int i,n,sum=0;

    printf("enter any number:");
    scanf("%d",&n);
    while (n>0)
    {
      sum=sum+n%10;
      n=n/10;
    }
     printf("sum of digit= %d",sum);
}
