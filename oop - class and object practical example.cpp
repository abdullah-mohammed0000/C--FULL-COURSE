#include<iostream>
using namespace std;

class student
{
public:
    int id;
    double gpa;
};

int main()
{
    student abdullah;
    abdullah.id = 105;
    abdullah.gpa = 3.35;
    student fahad;
    fahad.id = 110;
    fahad.gpa = 3.45;
    student nishad;
    nishad.id = 118;
    nishad.gpa = 0.00;

    cout<<abdullah.id<<"  "<<abdullah.gpa<<endl;
    cout<<fahad.id<<"  "<<fahad.gpa<<endl;
    cout<<nishad.id<<"  "<<nishad.gpa<<endl;
}

