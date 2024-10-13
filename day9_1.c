#include<stdio.h>
// static variables
void fun();
int main()
{
    
    fun();
    fun();
    fun();
    return 0;
}

void fun()
{
    int num1 = 10; // local variable -> value is not retained throughout the program
    static int num2 = 10; // static variable -> value is retained
    printf("local var : num1 = %d\n",num1); // 10 10 10
    printf("Static var : num2 = %d\n",num2); // 10 11 12
    num1++;
    num2++;
}