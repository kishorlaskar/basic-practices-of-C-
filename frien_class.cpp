#include<iostream>
#include<conio.h>


using namespace std;

class A
{
private:
    int id = 101;
    string name = "Kishor";
public:
    friend class B;
};

class B
{
    public:
    void display(A ob)
    {
        cout<<ob.id<<endl;
        cout<<ob.name<<endl;
    }
};

int main()
{

    B ob1;
    A ob2;

    ob1.display(ob2);

    getch();
}
