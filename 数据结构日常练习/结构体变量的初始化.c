#include "stdio.h"

struct student
{
  long int num;
  char name[20];
  char sex;
  char addr[20];

}a={10101,"liming",'M',"123beijing"};//结构体的定义和引用

int main()
{
  printf("%ld",a.num);

  return 0;
}
