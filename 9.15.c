#include<stdio.h>
main()
{
    int n,r,i;
    long p;

    printf("n= ");
     scanf("%d",&n);
      printf("r= ");
     scanf("%d",&r);
     if (n-r<r)
        r=n-r;
     p=1;
     for (i=1; i<=r;i++)
        p=p*(n-i+1)/i;
      printf("nCr= %ld",p);
}

