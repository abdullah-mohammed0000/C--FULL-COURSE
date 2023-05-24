#include<iostream>
using namespace std;
int main()
{ int n;
  cin>>n;
  int a[n];
  for(int i=0; i<n;i++)
  {   cout<<"Students "<<i+1<<" = ";
      cin>>a[i];
  }
  for(int i=0;i<n;i++)
  {
      cout<<"Student "<<i+1<<" marks = " <<a[i]<<endl;
  }




}
