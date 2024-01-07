#include <stdio.h>

main()
{
   int i,n,a[100],sum=0;
   printf("how many numbers:");
   scanf("%d",&n);
   for (i=0;i<n;i++)
     scanf("%d",&a[i]);
    for (i=0;i<n;i++)
        sum=sum+a[i];
    printf("sum of the values in the array= %d",sum);
}
