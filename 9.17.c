#include<stdio.h>
main()
{
    int n,r;

    printf("enter any integer number:");
    scanf("%d",&n);
     while (n>9)
     {
         r=0;
         while(n>0)
         {
             r=r+n%10;
             n=n/10;
         }
         n=r;
     }

     printf("digital root= %d",n);

}
