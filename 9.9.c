#include<stdio.h>
main()
{
    int x,y,p=1,i;
    printf("x= ");
     scanf("%d",&x);
      printf("y= ");
     scanf("%d",&y);
       for (i=1; i<=y ;i++)
        p=p*x;
       printf("%d to power %d= %d",x,y,p);

}
