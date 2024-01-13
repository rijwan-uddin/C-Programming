#include<stdio.h>
#include<math.h>
main()
{
    int a,b,c,d;
    float x1,x2,p,q;
    printf("a=");
    scanf("%d",&a);
        printf("b=");
    scanf("%d",&b);
        printf("c=");
    scanf("%d",&c);
    d=b*b-4*a*c;
    if (d>0)
    {
        x1=(-b+sqrt(b))/(2*a);
        x1=(-b-sqrt(b))/(2*a);
        printf("\nx1=%.2f\nx2=%.2f",x1,x2);

    }
    else if(d==0)
    {


        x1=x2=-b/(2*a);
     printf("\nx1=%.2f\nx2=%.2f",x1,x2);
    }
    else
    {
        p=-b/(2*a);
        q=sqrt(-d)/(2*a);
        printf("\nx1=%.2f+%.2fi \nx2=%.2f-%.2fi",p,q,p,q);
    }
}
