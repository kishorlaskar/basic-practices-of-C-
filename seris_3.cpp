#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int n,i,result=1;

    cout<<"Enter the nth value:";
    cin>>n;

    for(i=1;i<=n;i+1)
    {
        result = result + i;

    }
    cout<<result;
}
