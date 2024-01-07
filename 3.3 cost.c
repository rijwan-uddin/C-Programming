
#include<stdio.h>
#include<math.h>
main()
{
    int t;
    printf("enter any angle: ");
    scanf("%d",&t);

printf("cos(%d)= %.2f",t,cos(t*M_PI/180));
}
