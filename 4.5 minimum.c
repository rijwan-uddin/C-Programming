#include<stdio.h>
main()
{
   int a,b,min;
    printf("a= ");
    scanf("%d",&a);
     printf("b= ");
    scanf("%d",&b);
    if (a<b)
        min=a;
    else
        min=b;
    printf("Minimum= %d",min);
}

