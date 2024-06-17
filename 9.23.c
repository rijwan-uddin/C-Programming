#include<stdio.h>
main()
{
    int n,i,isprime,t;
    printf("enter any integer number:");
    scanf("%d",&n);
    if (n<2)
        isprime=0;
    else
        {
            isprime=1;
            t=sqrt (n);

            for (i=2;i<=t;i++)
                if (n%i==0)
                {

                isprime=0;
                break;
                }
        }
        if (isprime==1)
           printf("prime");
        else
           printf("not prime");
}
