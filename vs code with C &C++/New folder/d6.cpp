#include<iostream>
using namespace std;

class Point
{
    private:
        int x;
        int y;
      
    public:
 //constructor membres initilezers list
    
    Point():x(10),y(20)
    { 
        //not needed
        // this->x=10;
        // this->y=20;

    }

    Point(int x,int y):x(x),y(y) //constructor membres initilezers list
    {
        //not needed
        // this->x=x;
        // this->y=y;
    }

    void display()
    {
        cout<<"x="<<this->x<<endl;
        cout<<"y="<<this->y<<endl;
    }
};


int main()
{
    Point p1;
    p1.display();
    
    Point p2(11,22);
    p2.display();
}