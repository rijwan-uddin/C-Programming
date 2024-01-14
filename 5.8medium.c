#include<stdio.h>
main()
{
    int a,b,c,mid;
     printf("a= ");
     scanf("%d",&a);
     printf("b= ");
     scanf("%d",&b);
      printf("c= ");
     scanf("%d",&c);

     mid=(a>b)? (a>c)?(b>c)? b:c:a:(b>c)? (a>c)? a:c:b;
     printf("midium=%d",mid);
}


