#include<stdio.h>
main()
{
    int i,n,t;

    printf("enter any decimal number:");
    scanf("%d",&n);
     printf("equivalent hexadecimal number is:");
     for (i=12;i>=0;i-=4)
     {
      t=(n>>i) &15;
      if (t<10)
      printf("%d",t);
      else
      printf("%c",t+55);
     }
}
