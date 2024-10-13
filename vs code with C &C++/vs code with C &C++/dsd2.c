#include <stdio.h>
//#define SIZE 9
/* #define swap(a,b){int t=a;a=b;b=t;}

void selection_sort(int arr[SIZE])
{
  int sel_pos = 0;
  int pos = 0;
  for (sel_pos = 0; sel_pos < SIZE - 1; sel_pos++)
  {
    for (pos = sel_pos + 1; pos < SIZE; pos++)
    {
      if (arr[sel_pos] > arr[pos])
      {
        int a;
        int b;
        int t;
        t = a;
        a = b;
        b = t;
        t = arr[sel_pos];
        arr[sel_pos] = arr[pos];
        arr[pos] = t;

        // swap(arr[sel_pos],arr[pos]);
      }
    }
  }
}

void display(int arr[SIZE])
{

  for (int i = 0; i < SIZE; i++)
  {
    printf("%5d", arr[i]);
  }
}
int main()
{
  int arr[SIZE] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
  selection_sort(arr);
  display(arr);

  return 0;
}
#define swap(a,b) {int t = a;a=b; b=t;}
#define SIZE 7
void bubble_short_eff(int arr[SIZE]);
void bubble_short(int arr[SIZE]);
void display(int arr[SIZE]);
//void display(int arr[SIZE]);
int main ()
{
int arr[SIZE]={ 92,8,4,12,21,23,3};
printf("before sortinf bubble\n");
display(arr);
//bubble_short(arr);
bubble_short_eff((arr));
printf("\n afte bubble short\n");
display (arr);
return 0;


}

void bubble_short(int arr[SIZE])
{
  for(int it=0;it<SIZE-1;it++)
   {
      
      for(int pos=0;pos<SIZE-1-it;pos++)

       {
        if (arr[it]>arr[pos+1])
          {
            int t;int a;int b;
               t=a;
                a=b;
                b=t;
          }
      }
    }    

}

void bubble_short_eff(int arr[SIZE])
{
  int comparison=0; int itration=0;
int flag ;
   itration++;
  for(int it=0;it<SIZE-1;it++)
    { flag=0;
      itration++;
     int it;
     for(int pos=0;pos<SIZE-1-it;pos++)
       {comparison++;
       if (arr[pos]>arr[pos+1])
       {swap(arr[pos],arr[pos+1]);
          //int t;int a;int b;
          //t=a;
          //a=b;
          //b=t;
        flag=1;
       }



       }
       if(flag==0)
       {
        break;
       }

    }   
    printf("\n comparison=%d\n  itration=%d",comparison, itration) ;
}
void display(int arr[SIZE])
{
for(int i=0;i<SIZE;i++)
  printf("%4d",arr[i])
};*/

#define SIZE 6
void insersion_eff(int arr[SIZE]);int a;int b;
swap(a,b){int t=a;a=b;b=t;}
void display(int arr[SIZE]);

int main()
{
int arr[SIZE]={5,4,6,8,4,7};
printf("before insersion\n");
display(arr);
insersion_eff(arr);
printf("after insersion\n");
display(arr);
return 0;
}
void display(int arr[SIZE])
{
   for(int i=0;i<SIZE;i++)
      {
        printf("%5d",arr[i]);
      }
 printf("\n");
}

void insersion_eff(int arr[SIZE])
{
  int key;
int i=0;int j;
j=arr[0];
//i=j+1;

for(i=j+1;i<SIZE;i++)
  {key=arr[i];
  
  
  
     for(j=0;j<SIZE;j++)
     {
        if(key>j)
         {int a;int b;
          swap(i,j);
         }

       }
      j--;



  }




}