#include "stdio.h"

int main()
{
  int a,b,*p1,*p2,*p;
  printf("please enter the value of a and b\n");
  scanf("%d",&a);
  scanf("%d",&b);//scanf()函数在实际使用时会有很多问题

  p1=&a;
  p2=&b;

  if(a<b)
  {
    p1=&b;
    p2=&a;
  }

  printf("a=%d,b=%d\n",a,b);
  printf("max=%d,min=%d\n",*p1,*p2);

  return 0;
}
