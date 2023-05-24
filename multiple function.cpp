#include<iostream>
using namespace std;
void adding(int a,int b)
{
    int result = a+b;
    cout<<result<<endl;
}
void subtraction(int a,int b)
{
    int result = a-b;
    cout<<result<<endl;
}
void division(float a,float b)
{
    float result = a/b;
    cout<<result<<endl;
}
void multiple(int a,int b)
{
    int result = a*b;
    cout<<result<<endl;
}
int main()
{
   int c,d;
   cin>>c>>d;
   adding(c,d);
   subtraction(c,d);
   division(c,d);
   multiple(c,d);
}
