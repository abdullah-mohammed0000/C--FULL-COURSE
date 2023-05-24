#include<iostream>
#include<stdio.h>
using namespace std;
int main ()
{
   char message[6]={'h','e','l','l','o'};
   cout<<message<<endl;
   char message1[]={'h','e','l','l','o','\0'};
   cout<<message1<<endl;
   char message2[]="hello";
   cout<<message2<<endl;
   char message3[30];
   gets(message3);
   cout<<message3<<endl;
}
