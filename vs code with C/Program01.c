#include<stdio.h>

int main(){
printf("Hii!!!\n");
   int  a,b;
  printf("Enter Charactor For ASCII value");
  scanf("%d/n",&a); 
  scanf("%d/n",&b); 
   
   printf("ASCII Of First Char:%d\n",a);
   printf("ASCII Of Second Char:%d",b);

   int c=diff(&a,&b);
   printf("Diff=%d\n");
   
   return 0; 
} 

   int dff(int  a,int  b)
{
   return b-a;

}