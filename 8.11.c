#include<stdio.h>
main()
{
    int i,j,n;
    printf("How many line: ");
    scanf("%d",&n);
    for (i=n; i>=1; i--)
    {
        for (j=1; j<=i; j++)
       printf("%4d",j);
       printf("\n") ;
    }
}

