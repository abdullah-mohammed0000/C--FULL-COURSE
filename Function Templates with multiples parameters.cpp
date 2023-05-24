#include<iostream>
using namespace std;

template <class mymessage1, class mymessage2>


    mymessage2 add(mymessage1 a,mymessage2 b)
    {
        return a+b;
    }
    int main()
    {
        cout<<add(10,20.5)<<endl;

    }


