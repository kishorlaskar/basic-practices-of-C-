#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int digit;
    cout<<"Enter a digit:";

    cin>>digit;

    switch(digit)
    {
    case 0:
        cout<<"Zero";
        break;
    case 1:
        cout<<"One";
        break;
    default:
        cout<<"Not Match";
    }

    getch();
}
