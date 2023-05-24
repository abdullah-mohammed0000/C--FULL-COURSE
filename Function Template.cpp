#include<iostream>
using namespace std;

template <class mymessage>


    mymessage add(mymessage a,mymessage b)
    {
        return a+b;
    }
    int main()
    {
        cout<<add(10,20)<<endl;
        cout<<add(10.5,20.2)<<endl;
    }


