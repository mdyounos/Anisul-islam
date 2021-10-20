#include<iostream>
using namespace std;

template  <class Template>
Template add(Template a,Template b)
{
    return a+b;
}
int main()
{
    cout<<"Sum of two integer number: "<<add(8,10)<<endl;
    cout<<"Sum of two double number: "<<add(20.6,5.1)<<endl;
    return 0;
}
