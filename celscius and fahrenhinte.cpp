#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
  double celcius,fahrenhite;
  cout<<"Enter fahrenhite Temperature : ";
  cin>>fahrenhite;
  celcius = (fahrenhite - 32)/1.8;
  cout<<"The celcius temperature is : "<<celcius;
}
