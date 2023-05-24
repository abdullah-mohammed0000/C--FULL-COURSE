#include<iostream>
using namespace std;

int function(int n)
{
    if(n==1)
        return 1;
    else
        return n*function(n-1);
}
int main()
{
   int n=4;
  int factorial= function(n);
  cout<<factorial;
}
