
/*int main()
{const float f=3.14;
float const* const ptr=&f;
float f=2.14;
//ptr=2.14;
printf("float=%.3f",f);

printf("float=%.3f",f);


char ch[20];
printf("entre ch:");
gets(ch);
printf("char is=%s",ch);
return 0;

 char name[20];

    printf("Enter your name :");
    //scanf("%s",&name); // scans till white spaces
    gets(name); // scans till new line
    printf("Name = %s",name);
    return 0;


    char ch[20];
    printf("entre charactor:");
    //scanf("%[a-z]",&ch);
    scanf("%[^0-9]",ch);
    printf("charactor is=",ch);

//#include<stdio.h>
// string function simulation

void mystr_cpy(char dest[],char src[]);
int main()
{
    char src[] = "sunbeam";
    char dest[50];
    mystr_cpy(dest,src); //(200,100)
    printf("destination = %s",dest);

    return 0;
}

void mystr_cpy(char dest[],char src[])
{
    int i = 0;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    //int i;
    

    dest[i] = '\0';
};

#include<stdio.h>
void  accept(int arr[3][3]);
void print(int arr[3][3]);


 
 int main()
 {
   int arr[3][3];
     accpet  (arr);
      print (arr);
    return 0;
 }
void accpet  (int arr[3][3])
 { 
  printf("entre value:");
int i;
  for (i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        
        {
           printf("arr[%d][%d]=",i,j);
             scanf("%d",&arr[i][j]);
        }
      }  

  }

void  print (int arr[3][3])

{
printf("val are:\n");

    for(int i=0;i<3;i++)
    {   
      for(int j=0;j<3;j++)
     {
        printf("%4d",arr[i][j]);
     }
      printf("\n");
    }

}*/
#include<stdio.h>
// pointer notation of 2-D array
int main()
{
    int arr[3][3] = {1,2,3,4,5,6,7,8};

    for(int i = 0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            //printf("%4d",*(*(arr+i)+j));
            printf("%4d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}




















