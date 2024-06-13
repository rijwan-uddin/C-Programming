#include<stdio.h>
main()
{
    int n,r,i;
    long p;

    printf("n= ");
     scanf("%d",&n);
      printf("r= ");
     scanf("%d",&r);
     p=1;
     for (i=r+1; i<=n;i++)
        p=p*i;
      printf("nPr= %ld",p);
}
