#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char name[100]="Abdullah Mohammed";
    char name1[]="Akash Rahman";
    char name3[50];
    int len = strlen(name);
    cout<<len<<endl;
    strcpy(name3,name);
    cout<<name3<<endl;
    strcat(name,name1);
    cout<<name<<endl;
    int value = strcmp(name,name1);
    cout<<value<<endl;
    strupr(name);
    cout<<name<<endl;
    strlwr(name1);
    cout<<name1<<endl;


}
