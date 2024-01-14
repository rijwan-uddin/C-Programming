#include<stdio.h>
main()
{
    int a,b,c,max;
     printf("a= ");
     scanf("%d",&a);
     printf("b= ");
     scanf("%d",&b);
      printf("c= ");
     scanf("%d",&c);

     max=(a>b)? (a>c)? a:c: (b>c)? b:c;
     printf("maximum=%d",max);
}

