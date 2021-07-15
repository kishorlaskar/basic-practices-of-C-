#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    while(1)
    {
        int gessingNumber, randomNumber;

    cout<<"Enter a Guessing Number from 1 to 5:";
    cin>>gessingNumber;

    randomNumber = 1 + rand() % 5;
    if(gessingNumber == randomNumber)
    {
        cout<<"You have won it!"<<endl;
    }
    else
        {
            cout<<"Wrong!,You Lose it"<<endl;
            cout<<"Random number was:"<<randomNumber<<endl<<endl;
        }
    }

getch();
}
