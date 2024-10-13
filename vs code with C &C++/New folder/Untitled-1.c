#include<stdio.h>
#include<string.h>
/*int main()
{ printf("hello");
printf("\n");
 char s1 [6]={"today"};
printf("%s",s1);printf("\n");
printf("%d",sizeof(s1));printf("............");*/


int main()
{
    char s1[10];
    printf("Specify string \n");
    fgets(s1,sizeof(s1),stdin);   
    printf("String s1 = %s .......",s1);
}






