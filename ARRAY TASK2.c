
#include<stdio.h>
int main()
{
 char ch,arr[5]={'a','b,','c,','d','e','\0'};
 int i;
 int position=-1;
 printf("\nEnter the character: \n");
 scanf("%c",&ch);
 for(i=0;i<5;i++)
 {
 if(ch==arr[i])
 {
 position=i+1;
 break;
 }
 }
 if(position==-1)
 {
 printf("Elements not found\n");
 }
 else
 {
 printf("Elements found and the position of this element: %d\n",position);
 }
}
