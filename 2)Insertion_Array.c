#include <stdio.h>

void display(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }
}

int indInsertion(int arr[],int size,int element,int capacity,int index)
{
  if(size>=capacity)
  {
    return -1;
  }
  for(int i=size-1;i>=index;i--)
  {
    arr[i+1]=arr[i];
  }
  arr[index]=element;
  return 1;

}

int main()
{
  int size=5,element=100,index=3;
  int arr[10]={1,2,3,4,5};
  display(arr, 5);
  indInsertion(arr,size,element,100,index);
  size++;
  printf("\n");
  display(arr, size);
  return 0;
}
