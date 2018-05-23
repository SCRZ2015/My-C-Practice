#include "stdio.h"

void swap(int *p1,int *p2)
{
  int temp;
  temp=*p1;
  *p1=*p2;
  *p2=temp;
}//定义一个函数 在使用变量前必须先声明，指针变量和其他变量一样，必须先声明

int main()
{
  int a,b,*pointer_1,*pointer_2;
  printf("Please enter the value of a and b\n");
  scanf("%d,%d",&a,&b);//注意scanf函数的使用

  pointer_1=&a;
  pointer_2=&b;

  if(a<b)
  {
    swap(pointer_1,pointer_2);//指针是pointer_1,不是*pointer_1,只有在声明的时候用*pointer_1  !!!!!
  }

  printf("max=%d,min=%d\n",*pointer_1,*pointer_2);

  return 0;

}
