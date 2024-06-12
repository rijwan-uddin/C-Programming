#include<stdio.h>
main()
{
    int a,b,i,lcm;
     printf("a=");
      scanf("%d",&a);
      printf("b=");
       scanf("%d",&b);
       lcm=1;
       for (i=2; i<=a && i<=b;i++)
       {
        while (a%i==0 && b%i==0)
        {
            a=a/i;
            b=b/i;
            lcm=lcm*i;
        }
       }
      lcm=lcm*a*b;
      printf("LCM= %d",lcm);
}
