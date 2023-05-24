#include<iostream>
using namespace std;
class student{
public:
    int id;
    double gpa;
    void display()
    {
        cout<<id<<"  "<<gpa<<endl;
    }
};
int main()
{
    student abdullah,nishad,fahad;
    abdullah.id = 105;
    abdullah.gpa = 4.33;
    abdullah.display();
    fahad.id = 110;
    fahad.gpa = 4.75;
    fahad.display();
    nishad.id = 118;
    nishad.gpa = 4.50;
    nishad.display();
}
