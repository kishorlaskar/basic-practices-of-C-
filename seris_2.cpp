//2+4+6+....+n for even i=2; i=i+2;
//1+3+5+...+n for odd i=1; i=i+2;
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int n,i,sum=0;
    cout<<"Enter the value of n:";
    cin>>n;

    for(i=1;i<=n;i=i+2)
    {
        sum =sum+i;
    }
    cout<<sum;

    getch();
}
