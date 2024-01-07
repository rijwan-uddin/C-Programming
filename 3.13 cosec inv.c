#include<stdio.h>
#include<math.h>
main()
{
    float n;
    printf("enter any value: ");
    scanf("%f",&n);
printf("cosec inverse(%.2f) = %.2f",n,asin(1.0/n)*180/M_PI);
}


