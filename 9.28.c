#include<stdio.h>
main()
{
    long a,b,c;
    int n,i;
    printf("How many numbers:");
    scanf("%d",&n);
    a=0;
    b=1;
    for (i=1;i<=n;i++)
    {
        printf("%10ld",a);
        c=a+b;
        a=b;
        b=c;
    }
}
