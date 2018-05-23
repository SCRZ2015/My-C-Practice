/*从顺序表中删除最小元素，空出的位置由最后一个元素填补*/

typedef struct seqlist
{
  int *arra;
  int arra_length;
}seqlist;

void deleteminelement(seqlist *L)
{
  //查找到最下元素所在的位置
  int min_element_index=0;

  int i=0;
  for(i=0;i<L->arra_length;i++)
  {
    if(L->arra[min_element_index]<L->arra[i])
    {
      min_element_index=i;
    }
  }
  //删除最小的元素，将末尾的元素添加到该位置

  L->arra[min_element_index]=L->arra[L->arra_length-1];
  L->arra_length-=1;
}
