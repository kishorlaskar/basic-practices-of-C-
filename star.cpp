#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int n,row,col;

    cout<<"Enter the Number of line:";
    cin>>n;

     for(row=5;row<=n;row++)
     {
         for(col=5;col<=row;col++)
         {
             cout<<" "<<col;
         }
              cout<<endl;

     }
  getch();
}

