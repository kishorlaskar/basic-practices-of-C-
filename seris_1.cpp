// 1+2+3+.....+n
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
     int n,sum=0;
     cout<<"Enter the value of n:";
    cin>>n;
   for(int i=1; i<=n; i=i+1)
  {
    sum = sum+i;
  }
cout<<sum;
getch();


}
