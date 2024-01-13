#include<stdio.h>
main()
{
   int a,b,max;
    printf("a= ");
    scanf("%d",&a);
     printf("b= ");
    scanf("%d",&b);
    if (a>b)
        max=a;
    else
        max=b;
    printf("Maximum= %d",max);
}
