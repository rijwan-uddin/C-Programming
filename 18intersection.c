#include <stdio.h>
main()
{
int a[100], b[100], flag = 0, n1, n2, i, j;
printf("Enter array1 size : ");
scanf("%d",&n1);
printf("\nEnter array2 size : ");
scanf("%d",&n2);
printf("\nEnter array1 element : ");
for(i = 0;i < n1;i++)
scanf("%d",&a[i]);
printf("\nEnter array2 element : ");
for(i = 0;i < n2;i++)
scanf("%d",&b[i]);
printf("Intersection: ");
for(i = 0;i < n1;i++)
{
for(j = 0;j < n2;j++)
{
if(b[i] == a[j])
{
flag = 1;
}
}
if(flag == 1)
{
printf("%d ", b[i]);
}
flag = 0;
}
}
