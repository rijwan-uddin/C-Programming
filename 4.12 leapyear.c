#include<stdio.h>
main()
{
    int year;
    printf("Enter any year=");
    scanf("%d",&year);
    if (year%4!=0)
        printf("Not Leap year");
    else if (year%100!=0)
         printf(" Leap year");
    else if (year%400!=0)
         printf("not Leap year");
         else
        printf(" Leap year");

}
