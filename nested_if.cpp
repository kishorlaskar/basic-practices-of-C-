#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int number;
    cout<<"Enter Your mark:";
    cin>>number;
    if(number>32)
        {
             if(number >=80)
    {
        cout<<"A+";
    }
    else if(number >=70)
    {
        cout<<"A";
    }
    else if(number >=60)
    {
        cout<<"A-";
    }
    else if(number >=50)
    {
        cout<<"B";
    }
    else if(number >=40)
    {
        cout<<"C";
    }
    else if(number >=33)
    {
        cout<<"D";
    }
        }
    else
        {
            cout<<"Fail";
        }
    getch();
}
