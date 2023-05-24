#include<iostream>
using namespace std;
void display(int num)
{
    num=20;

}
void display(int *b)
{
    *b = 20;

}


int main()
{
    int x=10;
    cout<<"Before calling the function x = "<<x<<endl;
    display(x);
    cout<<"After calling the function x = "<<x<<endl;
    int p=10;
    cout<<"Before calling the function p = "<<p<<endl;
    display(&p);
    cout<<"After calling the function p  = "<<p<<endl;
}


