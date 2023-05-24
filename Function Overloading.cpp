#include<iostream>
using namespace std;
void function(int a,int b)
{
    int sum = a+b;
    cout<<sum<<endl;
}
void function(int a,int b,int c)
{
    int sum = a+b+c;
    cout<<sum<<endl;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    function(a,b);
    function(a,b,c);
}


/*void function(int x,int y)
{
    int sum = x+y;
    cout<<sum<<endl;
}
void function(double x,double y,double z)
{
    double sum = x+y+z;
    cout<<sum<<endl;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    function(a,b);
    function(a,b,c);
}
*/
