#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int leap_year;
    cin>>leap_year;
    if(leap_year%4==0 && leap_year%100!=0 || leap_year%400==0)

    {
        cout<<"Leap Year";
    }
    else
    {
        cout<<"Not Leap Year";
    }
    getch();
}
