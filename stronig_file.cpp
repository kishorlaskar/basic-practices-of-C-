#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    string name;
    int age;
    ofstream file;
    file.open("student_details.txt",ios::out|ios::app);

    for(int i=0;i<3;i++)
    {
         cout<<"Enter Your name: "<<endl;
    getline(cin,name);
    file<<name<<endl;

    cout<<"Enter Your Age: "<<endl;
    cin>>age;
    file<<age<<endl;
    cin.ignore();
     }

     file.close();
     cout<<"Data is inserted";
    return 0;
}
