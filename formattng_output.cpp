#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    float num1 ,num2, sum,sub,mul,rem;
    cout<<"Enter two numbers:";
    cin>>num1>>num2;
    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(10);

    sum = num1+num2;
    cout<<"Sum is:"<<setw(20)<<sum<<endl;
    cout<<noshowpoint;
    sub = num1-num2;
    cout<<"Sub is:"<<setw(20)<<sub<<endl;
    mul = num1*num2;
    cout<<"Mul is:"<<setw(20)<<mul<<endl;
   double div = (float) num1/num2; //we use typecasting and convert integer into float.
    cout<<"Divison is:"<<setw(20)<<div<<endl;
    getch();
}
