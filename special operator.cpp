#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a;
    float f;
    double d;
    char k;
    char name[20];
    int x ,y;
    int sum =(x=20,y=30,sum=x+y);

    int c = sizeof(a);
    cout<<c<<endl;
     c= sizeof(f);
    cout<<c<<endl;
     c= sizeof(d);
    cout<<c<<endl;
    c= sizeof(k);
    cout<<c<<endl;
     c= sizeof(name);
    cout<<c<<endl;
     cout<<sum<<endl;
    getch();
}
