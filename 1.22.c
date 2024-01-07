#include<stdio.h>
main()
{
    int d,m,y;
    printf("Enter any date in format (DD MM YYYY):");
    scanf("%d%*c%d%*c%d",&d,&m,&y);
    printf("\nDay=%d\nMonth=%d\nYear=%d",d,m,y);
}


