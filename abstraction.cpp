#include<iostream>
#include<conio.h>

using namespace std;


class MobileUser
{
public:

    void call()
    {
        cout<<"Hello"<<endl;
    }

    virtual void SendMessage() = 0;
};

class Rahim : public MobileUser
{
    public:
    void SendMessage()
    {
        cout<<"I am Rahim"<<endl;
    }

};
class Karim: public MobileUser
{
    public:
    void SendMessage()
    {
        cout<<"I am Karim"<<endl;
    }

};

int main()
{
    MobileUser *m;
    Rahim r;
    Karim k;
    m = &r;
    m->call();
    m->SendMessage();

    m = &k;
    m->SendMessage();



    getch();
}
