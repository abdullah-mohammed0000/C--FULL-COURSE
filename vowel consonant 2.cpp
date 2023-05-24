#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter any character: ";
    cin>>ch;
    ch=tolower(ch);
    if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u')
    {
        cout<<"Vowel";
    }
    else if(ch>='0' && ch<='9')
    {
        cout<<"Digit";
    }
    else
    {
        cout<<"consonant";
    }
    getch();
}


