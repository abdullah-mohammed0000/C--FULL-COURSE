
#include<iostream>
using namespace std;

class student
{
public:
    int id;
    double gpa;
    void display()
    {
        cout<<id<<"  "<<gpa<<endl;
    }
    student(int x, double y)
    {  id = x;
     gpa = y;

    }
};

int main()
{student abdullah(105,4.50),nishad(118,5.00),fahad(110,4.67);
    abdullah.display();
    fahad.display();
    nishad.display();
}

