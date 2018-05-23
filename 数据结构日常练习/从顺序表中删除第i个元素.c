#include "stdio.h"

typedef struct seqlist
{
  int *arra;
  int arra_length;
}seqlist;

int main()
{
  int arra[10]={1,2,3,4,5,6,7,8,9,10};

  seqlist L;
  L.arra=arra;
  L.arra_length=10;

  printf("please enter what number of elements you wangt to delete\n");
  int i;//接下来要循环覆盖元素

  scanf("%d",&i);

  for(int index=i;index<L.arra_length;index++)
  {
    arra[index-1]=arra[index];
  }

  for(int index=0;index<L.arra_length-1;index++)
  {
    printf("%d\n",arra[index]);
  }


  return 0;
}
