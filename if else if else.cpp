#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if (a>=1 && a<=100)
    {
        cout<<"positive";

    }
    else if(a<0)
    {
        cout<<"negative";
    }
    else
    {
        cout<<"zero";
    }
    getch();
}
