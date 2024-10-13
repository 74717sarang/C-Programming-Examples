#include<stdio.h>
int main()

{
    int c=0;
int i;
char arr[20]="((()()" ;

  for(int i=0;i<6;i++)
  {   
    if(arr[i]=='(' && arr[i+1]==')')  
     // if (arr[i]==41)
       
        c++;     
        //printf("c=%d",c);
       
     
  }
    printf("c=%d",c);


/*char  a='()';
printf("a=%c\n",a);
printf("%d\n",a);

return 0;*/
}