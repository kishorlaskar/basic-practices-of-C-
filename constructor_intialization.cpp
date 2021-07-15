#include<iostream>
#include<conio.h>

using namespace std;

class Student
{
        public:
             const int admissonFee;
             const int examFee;

    Student(int x, int y)
    :admissonFee(x),examFee(y) //constructor intializer
        {
          cout<<admissonFee<<endl;
          cout<<examFee;
        }

};

int main()
{
    Student sl(15000,2500);
    getch();
}

