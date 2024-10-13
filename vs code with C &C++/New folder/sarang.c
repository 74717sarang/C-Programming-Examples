#include <stdio.h>
#include<stdlib.h>

/* enum year {jan=1,feb,march,april,may,jun,july,august,sept,oct,nove,dece};
enum year month;
//("enter the month: ");
//scanf("%d",&month);
       printf("Enter the month :");// 7
        scanf("%d",&month);


switch (month)
   { 
    case jan:
    case march:
    case may:
    case july:
    case august:
    case dece:
 
     printf ("31 day in month");
   case feb:
   printf ("28/29 day in month");
case april:case jun: case sept:
printf("30 day in month");

  default :  
         printf("enter value in bitween 1-12");
         }
int x=-5;
while(x++ )
{printf("x");}

char i = 48;
switch (i)
{
case '2': printf("SunBeam Karad");break;
case '1': printf("SunBeam Market Yard");break;
default : printf("SunBeam IT Park Hinjewadi");
} return 0;


int val1 = 0x200;
//int val2 = 064 + val1;

printf("%d %d",val1);
int var1=100,var2=200;
var2-= var1--;
printf("var2=%d var1=%d",var2, var1);


int num1,num2,num3;
num1 = 144;
num2 = 156;
num3 = printf("%2d",++num1 )+ ++num2;
printf(" %d",num3);

{
char check = 'a';
again:
if(check)
{
switch (check)
{
case ('a'=='b' || 1 ) : printf("PG-DAC "); break;
case 0 && 'b'=='a' : printf("PG-DMC "); break;
//default : printf("PG-DITISS"); break;
}
} else
goto again;*/



   /* int i,j;
    
      for( i =65;i<=70;i++)
         {
         for (j=65;j<=i;j++)

              { 
               printf("%c",i);
             }

        printf("\n"); 
        }*/
/*int i,j;
    for(i=65;i<=70;++i)
    {
        for(j=65;j<=i;++j)
        {
            printf("%c",j);
        }
        printf("\n");
    }
   return 0;}*/
    
 


/*int power(int base ,int index);
int main()
{
   int base,index;
  

  printf("Enter value base index:: ");
     scanf("%d%d",&base, &index);
       int result=power(base, index);
       return 0;
}


int power(int base,int index)
  {if(index==0)
   return 1;
   return base *power(base ,index-1);
  return 0;};
  */
     
     
     int main()
   {
      int arr[5] = {12,13,17,123,14,15};

   for(int i=0;i<5;i++)
   {
      printf("%4d",arr[i]);

      printf("%-4d",arr[i]);
   }
  return 0;
    }
   


