#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num1,num2,sum,mul,div,sub,rem;
    cin>>num1>>num2;
    sum=num1+num2;
    sub=num1-num2;
    mul=num1*num2;
    div=num1/num2;
    rem = num1%num2;
float div1 = (float)num1/num2;

    cout<<sum<<endl<<sub<<endl<<mul<<endl<<div<<endl<<rem<<endl<<div1;
    getch();

}
