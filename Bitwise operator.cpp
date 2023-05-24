#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x=32;
    int y= 12;
    int w;
    w=x&y;
    cout<<w<<endl;
    w=x|y;
    cout<<w<<endl;
    w=x^y;
    cout<<w<<endl;
    w=x>>2;
    cout<<w<<endl;
    w=x<<2;
    cout<<w<<endl;
    getch();
}
