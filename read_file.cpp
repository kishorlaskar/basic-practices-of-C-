#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main()
{
    string line;

    ifstream file("details.txt");

    while(getline(file,line))
    {
        cout<<line<<endl;
    }

    return 0;
}
