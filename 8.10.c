
#include<stdio.h>
main()
{
    int i,j,n;
    printf("How many line: ");
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=i; j++)
       printf("%4c",j+64);
       printf("\n") ;
    }
}

