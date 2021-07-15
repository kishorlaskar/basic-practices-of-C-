#include<iostream>
#include<conio.h>

using namespace std;
int main()
 {
     int year;
     cout<<"Enter a year, to check leap-year:";
     cin>>year;

     if(year %4 ==0 && year%100 !=0)
     {
         cout<<"Leap Year is:"<<year;
     }
     else if(year % 400 ==0)
     {
         cout<<"Leap year is:"<<year;
     }
     else
        {
            cout<<"Not a Leap year";
        }
     getch();
 }
