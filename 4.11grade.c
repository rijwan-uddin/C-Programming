#include<stdio.h>
main()
{
    int mark;
    printf("Mark=");
    scanf("%d",&mark);
    if (mark>=80)
        printf("A+");
    else if (mark>=70)
        printf("A");
     else if (mark>=60)
        printf("A-");
       else if (mark>=50)
         printf("B");
        else if (mark>=40)
         printf("C");
         else if (mark>=33)
         printf("D");
         else
            printf("FAIL");
}





