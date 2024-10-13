#include <stdio.h>
/*#define SIZE 9
int linear_search(int key,int arr[SIZE])
{
 for (int i=0;i<SIZE;i++)
   {
    if(arr[i]==key)
    return i;
   }
   return -1;
}
int main()
{
int arr[9]={11,2,5,1,4,55,1,6,1};

int key;
printf("enter key\n:");
scanf("%d",&key);
int index=linear_search (key,arr);
if( index==-1)
  printf("key not found");
else
  printf("index is=%d",index);

}
int key;
// int i = 0;
#define SIZE 9
int binary_fun(int arr[SIZE], int key)
{
  int left = 0;
  int right = 8, mid;

  while (left <= right)
  {
    mid = left + right / 2;

    if (arr[mid] == key)
      return mid;
    if (key < arr[mid])
      right = mid - 1;
    else
      left = mid + 1;
  }
  return -1;
}*/

int main()
{
  int arr[15] = {11, 22, 33, 44, 55, 66, 77, 88, 99};
  int key;

  printf("enter key:");
  scanf("%d", &key);

  int index = binary_fun(arr, key);
  if (index == -1)
    printf("key is not found");

  else
    printf("index=%d", index);
  return 0;
}


