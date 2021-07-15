#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    string name;
    ofstream file;//to create or open file command.
    file.open("student.txt",ios::out | ios::app);

    cout<<"Enter Your Name: ";
    getline(cin,name);
    file<<"Welcome"<<name<<endl;

    file.close();
    cout<<"Data is Inserted";
    return 0;

}
