#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter any character: ";
    cin>>ch;
    if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'||ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U')
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

