#include <iostream>
#include<conio.h>
using namespace std;



int main(){

int first = 0, second = 1, co = 0 ,fibo,n;

cout<<"Enter the range:";
cin>>n;
while(co<n)
{
    if(co<=1)
    {
       fibo = co;
    }
    else
        {
            fibo = first+second;
            first = second;
            second = fibo;
        }
        cout<<fibo<<endl;
        co++;
}
getch();
}

