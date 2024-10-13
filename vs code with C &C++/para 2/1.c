#include<stdio.h>
   
   
   int main(void)
{
int a[][4] = {{1, 2},{4, 3, 2},{1, 3, 5, 6},{7}};
printf("%d\n%d",sizeof(a),sizeof(a[1][2]));
return 0;
}







// int main(void)
// {
// static char *s[] = {"PGDAC","PGDMC","PG-DITISS","PG-DESD",
// "PG-DBDA"};
// char **ptr[] = {s+3, s+2, s+1, s};
// char ***p=NULL;
// p = ptr;
// //++p;
// printf("%s", **p);
// return 0;}


//    int main(void)
// {
// int a=2,b=4,c=8;
// int *arr1[2] = {&a,&b};
// int *arr2[2] = {&b,&c};
// int *(*arr[2])[2] = {&arr1,&arr2};
// printf("%d \t", *(*arr[0])[1],*(*(**(arr+1)+1)));
// return 0;
// }





//   int main(void)
// {
// short num[3][2]= {
// { 3, 6 } ,
// { 9, 12 } ,
// { 15, 18 }
// };
// printf("%d %d",*(num+1)[1],**(num+2));
// return 0;}




//     int main(void)
// {
// char dest[] = "Visual basic";
// char src[] = "C++";
// puts(strcpy(&dest[7],src)-7);
// return 0;}

// #pragma pack(1)
// struct test
// {
// struct test *prev;
// char data;
// int count;
// int *a;
// struct test *next;
// };
// int main(void)
// {
// printf("\n size of node=%d", sizeof(struct test));
// return 0;}

 //#define so(s) sizeof(s)
// int main(void)
// {
// char *s1="ditiss",s2[]="DITI";
// printf("%d %d %d",sizeof(s1),sizeof(s2),sizeof("DI"));
//     return 0;}
