#include<stdio.h>
main()
{
    int i,n;

    printf("enter any decimal number:");
    scanf("%d",&n);
     printf("equivalent octal number is:");
     for (i=15;i>=0;i-=3)
     printf("%d",(n>>i)&7);

}

