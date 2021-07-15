#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
while(1)
{
    try
    {
        double x,y;
    cout<<"Number One:"<<endl;
    cin>>x;
    cout<<"Number Two:"<<endl;
    cin>>y;

            if(y==0)
            {
                throw(-1);

            }

    double z = (double) x/y;
    cout<<"RESULT IS: "<<endl<<z<<endl;
    }
    catch(int x)
    {
        cout<<"Divided By Zero is not possible.It's disobey rules of math."<<endl;
    }


}

}
