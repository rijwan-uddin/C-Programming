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
    if (a>b)
    {
        if (a>c)
        {
            if (b>c)

                mid=b;
            else
                mid=c;
        }
        else
            mid=a;
            }

            else
            {

    if (b>c)
    {
        if (a>c)
            mid=a;
        else
            mid=c;
    }
    else
        mid=b;
            }
      printf("midimum=%d",mid);
}

















