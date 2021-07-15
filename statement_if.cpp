#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    //If you give 5. then it will show positive.But it checks all the if statement. Which is a time consuming matter.

    int num;
    cout<<"Enter a number:";
    cin>>num;
    if(num>0)
        cout<<"positive";
    if(num<0)
        cout<<"Negative";
    if(num == 0)
        cout<<"Zero";

    getch();
}
