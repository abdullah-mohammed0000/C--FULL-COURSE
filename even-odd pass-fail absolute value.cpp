#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num,mark,num1,num2,value;
    cout<<"Enter a number for even-odd identification: ";
    cin>>num;
    if(num%2==0)
    {
    cout<<"even"<<endl;
    }
    else
    {
        cout<<"odd"<<endl;
    }
    cout<<"Enter a number for large-small identification: ";
    cin>>num1>>num2;
    if(num1>num2)
    {
        cout<<"num1` is larger than num2"<<endl;
    }
    else
    {
        cout<<"num2 is larger than num1"<<endl;
    }
    cout<<"Enter a number for pass-fail identification: ";
    cin>>mark;
    if(mark>=40)
    {
        cout<<"congratulation you passed"<<endl;
    }
    else
    {
        cout<<"rubbish!you failed"<<endl;
    }
    cout<<"Enter an absolute number: ";
    cin>>value;
    if(value<0)
    {
        cout<<(-value)<<endl;
    }
    else
    {
        cout<<(value)<<endl;
    }

    getch();

}
