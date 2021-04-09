#include <stdio.h>

void display(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }
}

int indDeletion(int arr[],int size,int index)
{
  for(int i=index;i<size-1;i++)
  {
    arr[i]=arr[i+1];
  }
  return 1;
}

int main()
{
  int size=5,index=3;
  int arr[10]={1,2,3,4,5};
  display(arr, size);
  indDeletion(arr,size,index);
  size--;
  printf("\n");
  display(arr,size);

}
