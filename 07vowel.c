#include <stdio.h>

int main()
{
  int y = 0, count = 0;
  char s[100];

  printf("Input a string\n");
  gets(s);

  while (s[y] != '\0') {
    if (s[y] == 'a' || s[y] == 'A' || s[y] == 'e' || s[y] == 'E' || s[y] == 'i' || s[y] == 'I'
        || s[y] =='o' || s[y]=='O' || s[y] == 'u' || s[y] == 'U')
      count++;
    y++;
  }

  printf("count: %d", count);
}
