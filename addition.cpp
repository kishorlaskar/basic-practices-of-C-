#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
    int num1 ,num2, sum,sub,mul,rem;
    cout<<"Enter two numbers:";
    cin>>num1>>num2;
    sum = num1+num2;
    cout<<"Sum is:"<<sum<<endl;
    sub = num1-num2;
    cout<<"Sub is:"<<sub<<endl;
    mul = num1*num2;
    cout<<"Mul is:"<<mul<<endl;
   double div = (float) num1/num2; //we use typecasting and convert integer into float.
    cout<<"Divison is:"<<div<<endl;
    rem =num1%num2;
    cout<<"Reminder is:"<<rem;
    getch();
}
