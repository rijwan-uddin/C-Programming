#include<stdio.h>
main()
{
    int n;
    printf("enter any number: ");
    scanf("%d",&n);
    printf("%s",(n%2==0)?
           "Even number":"Odd number");
}
