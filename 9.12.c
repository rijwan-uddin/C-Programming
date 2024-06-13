
#include<stdio.h>
main()
{
    int n,r,i;
    long p;

    printf("n= ");
     scanf("%d",&n);
      printf("r= ");
     scanf("%d",&r);

     for (p=1,i=r+1; i<=n; p=p*i++);

      printf("nPr= %ld",p);
}
