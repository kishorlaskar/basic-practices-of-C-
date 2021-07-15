#include<iostream>
#include<conio.h>

using namespace std;

void addition(int,int);
void subtraction(int,int);
void multipication(int,int);
void divison(int,int);
int main()
{
    addition(10,20);
    subtraction(20,30);
    multipication(10,20);
    divison(20,10);
    getch();
}
void addition(int a, int b)  // function decleration.
{
    int sum = a+b;
    cout<<"Res is : "<<sum<<endl;
}
void subtraction(int a, int b)  // function decleration.
{
    int sub = a-b;
    cout<<"Res is : "<<sum<<endl;
}
void multipication(int a, int b)  // function decleration.
{
    int mul = a*b;
    cout<<"Res is : "<<sum<<endl;
}
void divison(int a, int b)  // function decleration.
{
    float div =  (float) a/b;
    cout<<"Res is : "<<sum;
}
