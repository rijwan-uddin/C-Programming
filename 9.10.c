#include<stdio.h>
main()
{
    int n,r,i;
    long factn,factr,p;

    printf("n= ");
     scanf("%d",&n);
      printf("r= ");
     scanf("%d",&r);

     factn=1;
     for (i=1; i<=n;i++)
        factn=factn*i;

     factr=1;
      for (i=1; i<=r;i++)
      factr=factr*i;
    p=factn/factr;
    printf("nPr= %ld",p);
}
