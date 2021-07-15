#include<iostream>
#include<conio.h>

using namespace std;

class Student
{
        public:
             const int admissonFee;
             const int examFee;

    Student(int x, int y)
    :admissonFee(x),examFee(y)
        {
          cout<<admissonFee<<endl;
        }

};

int main()
{
    Student sl(15000,2500);
    getch();
}

