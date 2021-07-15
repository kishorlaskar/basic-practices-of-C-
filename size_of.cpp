#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int a;//size =4
    float f;//size = 4
    double d;// size = 8
    char ch; //size = 1
    char name[20]; //size = 20 because there are 20  told in character array.


    int c = sizeof(a);
    int b = sizeof(f);
    int dbl = sizeof(d);
    int caa = sizeof(ch);
    int nm = sizeof(name);
    cout<<c<<endl;
    cout<<b<<endl;
    cout<<dbl<<endl;
    cout<<caa<<endl;
    cout<<nm<<endl;

    getch();
}
