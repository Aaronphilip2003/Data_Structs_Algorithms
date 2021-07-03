#include<stdio.h>

int binarySearch(int arr[],int search,int size)
{
  int low,mid,high;
  while(low<=high)
  {
    low=0;
    high=size-1;
  mid=(low+high)/2;
  if(arr[mid]==search)
  {
    return mid;
  }
  if(arr[mid]<search)
  {
    low=mid+1;
  }
  else
  {
    high=mid-1;
  }
  }
  return -1;
}

int main()
{
  int arr[100],size,searchElement,index;
  printf("Enter the size of the array:\n");
  scanf("%d",&size);
  printf("Enter the elements of the array:\n");
  for(int i=0;i<size;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("Enter the element to be searched:\n");
  scanf("%d",&searchElement);

  index=binarySearch(arr,searchElement,size);
  printf("%d was found at %d \n",searchElement,index);
  return 0;
}
