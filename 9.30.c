
#include<stdio.h>
main()
{
    long a,b,c;
    int n,i;
    printf("n=");
    scanf("%d",&n);
    a=0;
    b=1;
    for (i=1;a<=n;i++)
    {
        printf("%10ld",a);
        c=a+b;
        a=b;
        b=c;
    }
    if (a==n)
        printf("fibonacci");
    else
           printf("not fibonacci");
}
