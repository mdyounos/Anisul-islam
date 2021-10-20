#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    while(1)
    {
        try
        {
            cout<<"Enter 1st number: ";
            cin>>num1;
            cout<<"Enter 2nd number: ";
            cin>>num2;
            if(num2==0)
            {
                throw -1;
            }
            double result=(double) num1/num2;
            cout<<"result = "<<result<<endl;
        }
        catch(...)
        {
            cout<<"Divied by is not possible."<<endl;
            cout<<"please try again."<<endl;
        }
    }
    return 0;
}
