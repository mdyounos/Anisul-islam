#include<iostream>
using namespace std;
class mobileUser{
public:
    void calling()
    {
        cout<<"Hello !";
    }
    virtual void sendMessage() =0;
};
class Rahim:public mobileUser{
public:
    void sendMessage()
    {
        cout<<"I am Rahim."<<endl;
    }
};
class Karim: public mobileUser{
public:
    void sendMessage()
    {
        cout<<"I am Karim."<<endl;
    }
};
int main()
{
    mobileUser *m;
    Rahim r;
    Karim k;
    m = &r;
    m->calling();
    m ->sendMessage();

    m = &k;
    m->calling();
    m->sendMessage();
    return 0;
}
