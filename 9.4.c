#include<stdio.h>
main()
{
    int i,n;

    printf("enter any decimal number:");
    scanf("%d",&n);
     printf("equivalent binary number is:");
     for (i=15;i>=0;i--)
     printf("%d",(n>>0)&1);

}
