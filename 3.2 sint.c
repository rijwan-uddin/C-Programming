#include<stdio.h>
#include<math.h>
main()
{
    int t;
    printf("enter any angle: ");
    scanf("%d",&t);
printf("sin(%d)= %.2f",t,sin(t*M_PI/180));
}
