#include<stdio.h>
main()
{
    int i,n,array[100];
    printf("How many integer numbers:");
    scanf("%d",&n);


    for(i=n-1;i>=0;i--)
    {
        scanf("%d",&array[i]);
    }

    printf("\nInteger numbers in reverse order:");
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
}
