#include<iostream>
using namespace std;

class point

{
private:
   int x ;
    int y;
public:
    
    (point)
{
 x=100;
 y=200;
 cout<<"sum parameterless"<<endl   
}
    
point(int a,int b)
{
    x=a;
    y=b;
    couut<<" with parameter"<<endl
}

voiud accpet()

{
    cout<<"val x"<<x<<endl;
    cin>>x;
    cout<<"val y"<<y<<endl;
     cin>>y;
    
}


void display()
 {
cout<<"x="<<x<<endl;
cout<<"y="<<y<<endl;
 }



};

int main ()
{

point p1;
p1.accpet();
p1.display();

}

