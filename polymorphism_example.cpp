#include<iostream>
#include<conio.h>
using namespace std;

class Shape
{
public:
    double dim1,dim2;

    Shape(double dim1,double dim2)
    {
            this->dim1 = dim1;
            this->dim2 = dim2;
    }
    virtual double area()
    {
        return 0;
    }
};

class Triangel : public Shape
{
    Triangel(double dim1, double dim2)
    :Shape(dim1,dim2)
    {

    }
   virtual double area()
    {

        return 0.5*dim1*dim2;
    }
};
class Rectangle : public Shape
{
    Rectangle(double dim1, double dim2)
    :Shape(dim1,dim2)
    {

    }
   virtual double area()
    {

        return dim1*dim2;
    }
};


int main()
{
    Shape *s;
    Triangel t(10,20);
    Reactangle r(30,40.55);

    s = &t;
    cout<<s->area();

    s = &r;
    cout<<s->area();

    getch();
}
