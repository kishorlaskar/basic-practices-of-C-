#include<iostream>
#include<conio.h>

using namespace std;


class Person
{
public:
    string name;
    int age;

    void display1()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
class Student : public Person
{
public :
    int id;

    void display2()
    {
        cout<<"id: "<<id<<endl;
        display1();
    }
};
int main()
{
    Student st;
    st.id=100;
    st.name="KL";
    st.age=25;
    st.display2();
    getch();
}
