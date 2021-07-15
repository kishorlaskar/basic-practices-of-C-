#include<iostream>
#include<conio.h>

using namespace std;

 int x = 10;

void display()
{
    cout<<"Inside the display function:"<<x;
};

int main()
{

   cout<<"Inside the main function: "<<x<<endl;

   display();
   getch();
}
