#include<stdio.h>
#include<math.h>
main()
{
    int t;
    printf("enter any angle: ");
    scanf("%d",&t);
printf("cot(%d)= %.2f",t,1/tan(t*M_PI/180));
}

