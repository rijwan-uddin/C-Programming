#include<stdio.h>
#include<math.h>
main()
{
    float n;
    printf("enter any value: ");
    scanf("%f",&n);
printf("cot inverse(%.2f) = %.2f",n,atan(1.0/n)*180/M_PI);
}

