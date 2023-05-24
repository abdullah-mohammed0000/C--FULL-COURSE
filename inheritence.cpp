#include<iostream>
#include<conio.h>
using namespace std;
class person
{
public:
    string name;
    int age;
    void display1()
    {
        cout<<name<<endl;
        cout<<age<<endl;
    }
};
class student: public person
{
public:
    int id;
    void display2()
    {
        cout<<id<<endl;
        display1();
    }

};
int main()
{
    student s1;
    s1.name ="Abdullah Mohammed";
    s1.age = 22;
    s1.id=109;
    s1.display2();
}
