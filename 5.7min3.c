#include<stdio.h>
main()
{
    int a,b,c,min;
     printf("a= ");
     scanf("%d",&a);
     printf("b= ");
     scanf("%d",&b);
      printf("c= ");
     scanf("%d",&c);

     min=(a<b)? (a<c)? a:c: (b<c)? b:c;
     printf("minimum=%d",min);
}


