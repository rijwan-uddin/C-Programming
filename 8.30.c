#include<stdio.h>
main()
{
    int i,j,n;
    printf("How many line: ");
    scanf("%d",&n);
    for (i=1; i<=n; i++)
{

        for (j=1; j<=n-i; j++)
         printf("    ");

        for (j=1; j<=i;j++)
       printf("%4d",i);
       printf("\n") ;
    }
     for (i=n-1; i>=1; i--)
    {
        for (j=1; j<=n-i; j++)
         printf("    ");

        for (j=1; j<=i;j++)
       printf("%4d",i);
       printf("\n") ;
    }

}
