#include<stdio.h>
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
}

int main()
{
  int arr[SIZE] = {11, 22, 33, 44, 55, 66, 77, 88, 99};
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