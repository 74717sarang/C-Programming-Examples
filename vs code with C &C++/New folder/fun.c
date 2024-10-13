//#include <stdio.h>

/*int main()
{
    int centerid;
    centerid = 5;
    printf("Centerid = %d \n",centerid);
    centerid++; //variable value in centerid
    //centerid--;   
    printf("Centerid = %d \n",centerid);
}

int main()
{   //carr here is a chaaracter array
    char carr[6]={'M','o','n','d','a','y'};
    printf("size = %u \n",sizeof(carr));
    for(int i=0;i<6;i++)
    {
        printf("%c",carr[i]);
    }

}

//#include<stdio.h>
int main(void)
{
int a[][4] = {{1, 2},{4, 3, 2},{1, 3, 5, 6},{7}};
printf("%d\n%d",sizeof(a),sizeof(a[1][2]));
return 0;
}*/



#include<stdio.h>
#include<string.h>
int main( void )
/*{
char str[] = "A Sunbeam", rev[20];
int i = strlen(str), j=0;
for( ; i>=0; rev[j++] = str[i--]);
rev[j] = '\0';
//puts(rev);
return 0;
}*/
//int main( void )



{
char str1[5] = "SunB", str2[20] = "IT Park wfa    ";
printf("%s", strcat(str1,str2));
return 0;
}