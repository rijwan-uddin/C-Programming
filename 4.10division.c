#include<stdio.h>
main()
{
    int mark;
    printf("mark=");
    scanf("%d",&mark);
    if (mark>=60)
        printf("First Division");
    else if (mark>=45)
        printf("Second Division");
       else if (mark>=33)
        printf("Third Division");
        else
           printf("Fail");
}
