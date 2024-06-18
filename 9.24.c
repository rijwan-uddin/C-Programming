
#include<stdio.h>
#include<math.h>

main()
{
    int n,i,j,isprime,t;
    printf("n= ");
    scanf("%d",&n);
         for (i=2;i<=n;i++)
          {
            isprime=1;
            t=sqrt (i);

            for (j=2;j<=t;j++)
     if (i%j==0)
        {

                isprime=0;
                break;
                }

        if (isprime==1)
           printf("%8d",i);
           }
}


