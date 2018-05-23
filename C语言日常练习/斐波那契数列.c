#include "stdio.h"

int funnum(int n)
{
  if(n<0)
    return -1;
  if(n==0)
    return 0;
  else if(n==1)
    return 1;
  else
    return (funnum(n-1)+funnum(n-2));
}

int main()
{
  int num;
  printf("please inout output how many numbers of Fibonaccinum\n");
  scanf("%d",&num);//scanf输入函数在实际使用时会出现很多问题，比较常见的的是对空格的不当使用

  if(num)
  {
    if((num>0)&&(num<50))
    {
      for(int i=1;i<num;i++)
      {
        printf("%d\n",funnum(i));
      }
    }
    else
    {
      printf("ERROR!\n");
    }
  }
  else
  {
    printf("ERROR!\n");
  }

  return 0;
}
