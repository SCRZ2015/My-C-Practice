#include"stdio.h"

typedef struct seqlist
{
  int *arra;
  int arra_length;
}seqlist;

void insertelement(seqlist *L,int i,int e)
{
  int end =i-1;

  int index = L->arra_length-1;
  for(    ; index>=end; index--)
  {
    L->arra[index+1]=L->arra[index];
  }
  L->arra[end]=e;
  L->arra_length+=1;
}//定义完一个函数之后怎么用也是个问题--

int main()
{
  int arra[100]={1,2,3,4,5,6,7,8,9,10};

  seqlist L;
  L.arra=arra;
  L.arra_length=10;

  printf("please enter the number of elements you want to insert 'e'\n");
  int i;//接下来要循环覆盖元素

  scanf("%d",&i);

  int e;
  insertelement(L,i,e);



  return 0;
}
