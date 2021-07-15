#include<iostream>
#include<conio.h>

using namespace std;

void addition(int,int); //function prototype.
int main()
{
    addition(10,20); // function calling.

    getch();
}
void addition(int a, int b)  // function decleration.
{
    int sum = a+b;
    cout<<"Sum is : "<<sum;
}
