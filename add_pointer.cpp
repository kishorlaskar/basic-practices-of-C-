#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int num1 = 10;
    int num2 = 20;
    int sum;

    int *p1;
    int *p2;

    p1 = &num1;
    p2 = &num2;

    sum = *p1 + *p2;
    cout<<"Result is : "<<sum;

     getch();
}
