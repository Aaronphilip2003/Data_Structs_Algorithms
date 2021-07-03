#include<stdio.h>

int search(int arr[],int search,int size)
{
  for(int i=0;i<size;i++)
  {
    if(search==arr[i])
    {
      return i;
    }
  }
  return -1;
}

int main()
{
  int arr[100],size,searchElement,index;

  printf("Enter the number of elements of the array:\n");
  scanf("%d",&size);
  printf("Enter the elements of the array:\n");
  for(int i=0;i<size;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("Enter the element to be searched:\n");
  scanf("%d",&searchElement);
  
  index=search(arr,searchElement,size);
  printf("%d was found at %d \n",searchElement,index);
  return 0;


}
