#include<iostream>
 using namespace std;

/*void sum(double n1,double n2)
{
    cout<<"sum "<<n1+n1<<endl;
}


int main()
    {
  sum(33,32);


    }*/

//#include <iostream>
//using namespace std;

class point
{

    int x;
    int y;

public:
   /* point()
    {
        x = 100;
        y = 200;
        cout << "sum parameterless" << endl;
    }*/

      point(int a, int b)
    {
        x = a;
        y = b;
        cout << " with parameter" << endl;
    }

    void accpet()

    {
        cout << "val x" << x << endl;
        cin >> x;
        cout << "val y" << y << endl;
        cin >> y;
    }

    void display()
    {
        cout << "x=" << x << endl;
        cout << "y=" << y << endl;
    }
};

int main()
{

    point p1();
    //p1.accpet();
    p1.display();
}
