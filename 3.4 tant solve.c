
#include<stdio.h>
#include<math.h>
main()
{
    int t;
    printf("enter any angle: ");
    scanf("%d",&t);
printf("tan(%d)= %.2f",t,tan(t*M_PI/180));
}

