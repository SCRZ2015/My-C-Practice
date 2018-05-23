#include "stdio.h"
#include "string.h"

int main()
{
  char str_1[100];
  char str_2[100];

  scanf("%s",str_1);
  scanf("%s",str_2);

  int str_len=0;
  char *p=str_1;

  while(*p!='\0')
   {
    ++str_len;
    ++p;
  }

  p=str_2;
  while(*p!='\0')
  {
    str_1[str_len]=*p;
    ++p;
    ++str_len;
  }

  str_1[str_len]='\0';

  printf("%s",str_1);

  return 0;
}
