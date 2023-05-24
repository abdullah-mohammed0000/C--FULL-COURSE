#include<iostream>
using namespace std;
int main()
{  try{
    int num1,num2;
    cout<<"Enter 1st number: ";
    cin>>num1;
    cout<<"Enter 2nd number: ";
    cin>>num2;
    if(num2==0)
    {
        throw 0;
    }
    double result = (double) num1/num2;
    cout<<result<<endl;
}
catch(...)
{
    cout<<"0 is not acceptable"<<endl;
    cout<<"Please,try another number."<<endl;
}
}
