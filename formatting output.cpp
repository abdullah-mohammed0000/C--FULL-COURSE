#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{
    int num1,num2;
    cin>>num1>>num2;
    cout<<fixed;
   cout<<setprecision(3);
    cout<<showpoint;
    float sum = (float) num1 + num2;
    cout<<setw(20)<<sum<<endl;

    float sub = (float) num1 - num2;
    cout<<setw(20)<<sub<<endl;
    cout<<noshowpoint;
    float mul = (float) num1 * num2;
    cout<<setw(20)<<mul<<endl;
    float div = (float) num1/num2;
    cout<<setw(20)<<div<<endl;
    int rem =  num1%num2;
    cout<<setw(20)<<rem<<endl;
}
