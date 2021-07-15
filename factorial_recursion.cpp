#include<iostream>
#include<conio.h>

using namespace std;

int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
    int n;
    cout<<"Enter any Number to factorial it: ";
    cin>>n;



    int factorial = fact(n);
    cout<<factorial;

    getch();
}
