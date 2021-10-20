#include<iostream>
using namespace std;
class A{
    int id = 194028;
    string name= "Md Younos";
public:
    friend class B;
};
class B{
public:
    void display(A ob1)
    {
        cout<<"id = "<<ob1.id<<endl;
        cout<<"name = "<<ob1.name<<endl;
    }
};
int main()
{
    A ob1;
    B ob2;
    ob2.display(ob1);
    return 0;
}
