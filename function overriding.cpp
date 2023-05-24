#include<iostream>
using namespace std;
//it also an example of hierarchical inheritance
class person
{
public:
    void display()
    {
        cout<<"I am a person"<<endl;
    }
};
class student:public person
{
public:
    void display()
    {
        cout<<"I am a student"<<endl;
    }
};
class teacher:public person
{
public:
    void display()
    {
        cout<<"I am a teacher"<<endl;
    }
};

int main()
{    person p;
     p.display();
    student s1;
    s1.display();
    teacher s2;
    s2.display();
}
