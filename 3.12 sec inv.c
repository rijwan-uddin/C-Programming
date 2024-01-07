
#include<stdio.h>
#include<math.h>
main()
{
    float n;
    printf("enter any value: ");
    scanf("%f",&n);
printf("sec inverse(%.2f) = %.2f",n,acos(1.0/n)*180/M_PI);
}

