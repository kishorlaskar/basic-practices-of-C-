#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int num1,num2,num3;

    cout<<"Find the Even and Odd number from the user input.\n";
    cout<<"Enter the Number:";
    cin>>num3;
    if(num3%2==0)
    {
       cout<<"It's an Even Number";
    }
    else{
        cout<<"Odd NUmber";
    }
    cout<<endl<<endl;
    cout<<"Find the small/largest number among two numbers\n";
    cout<<"Enter Number One and Number Two:";
    cin>>num1>>num2;
    if(num1>num2)
    {
       cout<<"Largest Number is:"<<num1;
    }
    else{
        cout<<num2;
    }
    getch();
}
