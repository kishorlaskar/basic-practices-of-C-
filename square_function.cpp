#include<iostream>
#include<conio.h>

using namespace std;


void square(int n)
{
    int sq = n*n;
    cout<<sq;
}
int main()
{
    int s;
    cout<<"Enter the NUmber You want to square:";
    cin>>s;
    square(s);

    getch();
}
