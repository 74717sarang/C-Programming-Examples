#include <iostream>

using namespace std;

/*class point
{
private:
    int x;
    int y;

public:
    point() : x(10), y(20)
    {
        cout << "inside parameter less" << endl;
    }
    void display()
    {
        cout<<"inside display"<<endl;
        cout << "x=" << this->x << endl;
        cout << "y=" << this->y << endl;
    }

    friend void print(point p1);
};
 void print(point p1) //friend function ahe function class chya baher declear karatat
    {         // tya mule class member globali acess hotat with syntax key word friend
        cout << "inside friend function" << endl;
        cout << "x=" << p1.x << endl;
        cout << "y=" << p1.y << endl;
    }


int main()
{
    point p1;
    print(p1);
    p1. display();
}

class point
  {  private:
       int x;
       int y;
      public:
      point():x(25),y(35)
      {
         cout<<"inside poapameterless "<<endl;
      }
      point(int x,int y) :x(x),y(y)
     {
        cout<<"inside parameteriszed"<<endl;
     }
     void display()
     {
        cout<<"x="<<this->x<<endl;
         cout<<"y="<<this->y<<endl;
     }

     point operator+(point p2)
     {
        point temp;
        temp.x=this->x +p2.x;
        temp.y=this->y+p2.y;
       return temp;
     }


 };
 int main()
 {
    point p1(20,30);
    point p2 (10,20);
    point p3=p1+p2;
    p3 .display();
 }*/

class point
{
private:
    int x;
    int y;

public:
   point ():x(x),y(y)
      {


      }

    point(int x, int y) : x(x), y(y)
    {
    }00
    void display()
    {
        cout << "x=" << this->x << endl;
        cout << "y=" << this->y << endl;
    }
    friend point operator -(point p1,point p2);
};
    point operator-(point p1, point p2)
    {
        
    point asd;
    asd.x=p1.x-p2.x;
    asd.y=p1.y-p2.y;
    return asd;
}
        //point temp;
        //temp.x = p1.x + p1.x;
        //temp.y = p2.y + p2.y;
        //return temp;
    


int main()
{
    point p1(55, 65);
    point p2(45, 55);
    point p3=p1-p2;
    p3.display();
}