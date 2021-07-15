#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int pass;
    cout<<"Inter the mark:\n";
    cin>>pass;
    if(pass>=33)
    {
        //cout<<(-pass)<<endl; // to show absoulate value.
        cout<<"Passed";
    }
        else
            {
                cout<<"Fail";
            }
    getch();
}
