#include<stdio.h>
#include<math.h>

main()
{
    int m,n,i,j,isprime,t;
    printf("m= ");
    scanf("%d",&m);
    printf("n= ");
    scanf("%d",&n);

         for (i=m;i<=n;i++)
         {
             if (i<2)
                isprime=0;
             else isprime=1;
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
