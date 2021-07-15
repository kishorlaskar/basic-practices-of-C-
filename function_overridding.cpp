#include<iostream>
#include<conio.h>

using namespace std;

class Person
{
public:
  virtual  void display()
    {
        cout<<"I am a person"<<endl;
    }
};
class Student : public Person
{
public:
    void display()
    {
        cout<<"I am a student"<<endl;
    }
};
class Teacher: public Person
{
public:
    void display()
    {
        cout<<"I am a teacher"<<endl;
    }
};
int main()
{
    Student s;
    Teacher t;
    Person *p; // make pointer of parent class;

    p = &t;
    p->display();

    p = &s;
    p->display();

   getch();
}
