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
       printf("%4d",j);

       for (j=i-1; j>=1; j--)
       printf("%4d",j);
       printf("\n") ;
    }

}
