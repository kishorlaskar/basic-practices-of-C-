#include<iostream>
#include<conio.h>

using namespace std;

double add(double,double);
int main()
{
   cout<<"Result is:"<<add(10.5,20.6);

    getch();
}
double  add(double a,double b)
{
    double sum = a+b;
    return sum;
}

