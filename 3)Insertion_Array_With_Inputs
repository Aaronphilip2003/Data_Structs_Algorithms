#include<stdio.h>

void display(int arr[],int n)
{
for(int i=0;i<n;i++)
{
  printf("%d ",arr[i]);
}
}

int insArray(int arr[],int size,int element,int index,int capacity)
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
  int arr[100],size,element,index;
  printf("Enter the number of elements in the array:\n");
  scanf("%d",&size);
  printf("Enter the elements of the array:\n");
  for(int i=0;i<size;i++)
  {
    scanf("%d",&arr[i]);
  }
  // printf("----------------------------------");
  // display(arr,size);

  printf("Enter the nunmber to be inserted:\n");
  scanf("%d",&element);

  printf("Enter the position to be inserted at:\n");
  scanf("%d",&index);
  index--;
  display(arr,size);

  insArray(arr,size,element,index,100);
  size++;
  printf("\n---------------------------------------\n");
  display(arr,size);

}
