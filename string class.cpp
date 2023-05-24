#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    string strl1="Abdullah Mohammed";
    string strl2="Anisul Islam";
    string strl3;
    strl3 = strl1;
    cout<<strl3<<endl;
    strl3=strl1 + strl2;
    cout<<strl3<<endl;
    int len = strl1.size();
    cout<<len<<endl;
}
