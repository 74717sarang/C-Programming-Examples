#include<stdio.h>

int main()
{
    int num1 = 10;
    int *ptr = &num1;

    printf("num1 = %d  address of num1 = %u\n",num1,&num1); // 10
    printf("num1 with ptr = %d  address of num1 with ptr = %u\n",*ptr,ptr); // 10

    ++*ptr; // value is incremented
    printf("num1 = %d  address of num1 = %u\n",num1,&num1); // 11
    printf("num1 with ptr = %d  address of num1 with ptr = %u\n",*ptr,ptr); // 11

    *ptr++; // pointer is incremented
    //(*ptr) -> (ptr++)
    printf("num1 = %d  address of num1 = %u\n",num1,&num1); 
    printf("num1 with ptr = %d  address of num1 with ptr = %u\n",*ptr,ptr);

    (*ptr)++; // value is incremented
    *++ptr; // pointer is incremented
    return 0;
}