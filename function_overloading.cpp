#include<iostream>
#include<conio.h>

using namespace std;

void sum(int x, int y)
{
    int sum = x+y;
    cout<<sum<<endl;
}
void sum(int x, int y, int z)
{
    int sum = x+y+z;
    cout<<sum;
}
int main()
{
    sum(10,20);
    sum(10,20,30);

    getch();
}
