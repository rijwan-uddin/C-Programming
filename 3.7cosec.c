#include<stdio.h>
#include<math.h>
main()
{
    int t;
    printf("enter any angle: ");
    scanf("%d",&t);
printf("cosec(%d)= %.2f",t,1/sin(t*M_PI/180));
}

