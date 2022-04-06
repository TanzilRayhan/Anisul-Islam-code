#include<iostream>
#include<conio.h>
using namespace std;
class shape
{
public:
    double d1,d2;
    shape(double d1,double d2)
    {
        this -> d1=d1;
        this -> d2=d2;
    }
    virtual double area()
    {
        return 0;
    }
};

class triangle: public shape
{
public:
    triangle (double d1, double d2): shape(d1,d2)
    {

    }
    double area()
    {
        return 0.5*d1*d2;
    }
};

class rectangle: public shape
{
public:
    rectangle (double d1, double d2): shape(d1,d2)
    {

    }
    double area()
    {
        return d1*d2;
    }
};

int main()
{
    shape *p;
    triangle t(10,20);
    rectangle r(10,20);

    p =  &t;
    cout<<"Triangle area = " << p -> area()<<endl;

    p =  &r;
    cout<<"Rectangle area = " << p -> area();

    getch();
}
