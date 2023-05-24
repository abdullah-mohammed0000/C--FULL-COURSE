#include<iostream>
using namespace std;
class mobileuser
{
public:
    void call()
    {
        cout<<"Hello!"<<endl;
    }
    virtual void sendmessage()=0;
};
class rahim:public mobileuser
{
public:
    void sendmessage()
    {
        cout<<"Hi,I am Rahim."<<endl;
    }
};
class karim:public mobileuser
{
public:
    void sendmessage()
    {
        cout<<"Hi,I am karim."<<endl;
    }
};
int main()
{
    mobileuser *m;
    rahim r;
    karim k;
    m=&r;
    m->call();
    m->sendmessage();
    m=&k;
    m->sendmessage();
}

