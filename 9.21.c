#include<stdio.h>
main()
{
    int n,i,isprime;
    printf("enter any integer number:");
    scanf("%d",&n);
    if (n<2)
        isprime=0;
    else
        {
            isprime=1;
            for (i=2;i<n/2;i++)
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

