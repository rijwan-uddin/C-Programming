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
    if (a<b)
    {
        if (a<c)
            min=a;
        else
            min=c;
    }

    else
    {
        if (b<c)
            min=b;
        else
            min=c;
    }
    printf("minimum=%d",min);

}

