#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int number;
    cout<<"Enter Your Number\n";
    cin>>number;
  //cout<<"Your Grade is:"<<number;
    if(number >100)
    {
        cout<<"Invalid Number";
    }
    else if(number < 0)
    {
        cout<<"INvalid Number";
    }

    else if(number >=80)
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
    else
        {
            cout<<"Fail";
        }

    getch();
}
