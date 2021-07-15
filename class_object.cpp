#include<iostream>
#include<conio.h>

using namespace std;

class Student
{
   public :
     int id;
     double gpa;


     void display()
     {
         cout<<id<<" "<<gpa<<endl;
     }

     Student(int x, double y) // parameterized constructor
     {
         id = x;
         gpa = y;
     }
     Student() // default constructor
     {
         cout<<"Default Parameter"<<endl;
     }

};


int main()
{
  Student obj;
  Student Kl(101,3.50);
  Student Sonia(102,3.50);
  Kl.display();


  Sonia.display();

    getch();
}
