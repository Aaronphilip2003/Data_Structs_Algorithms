#include<stdio.h>

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
  int arr[100],size,index;

  printf("Enter the size of the array:\n");
  scanf("%d",&size);

  printf("Enter the Elements of the array:\n");
  for(int i=0;i<size;i++)
  {
    scanf("%d",&arr[i]);
  }

  display(arr,size);
  printf("\n");

  printf("Enter the index of the element to be deleted:\n");
  scanf("%d",&index);
  
  indDeletion(arr,size,index);
  size--;

  display(arr,size);
}
