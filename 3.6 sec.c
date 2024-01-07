
#include<stdio.h>
#include<math.h>
main()
{
    int t;
    printf("enter any angle: ");
    scanf("%d",&t);
printf("sec(%d)= %.2f",t,1/cos(t*M_PI/180));
}
