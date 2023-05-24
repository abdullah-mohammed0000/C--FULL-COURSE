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
     void setvalue(int x, double y)
    {  id = x;
     gpa = y;

    }

};

int main()
{student abdullah,nishad,fahad;
       abdullah.setvalue(105,4.50);
    abdullah.display();
    fahad.setvalue(110,4.67);
    fahad.display();
   nishad.setvalue(118,5.00);
    nishad.display();
}

