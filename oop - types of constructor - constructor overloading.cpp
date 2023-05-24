#include<iostream>
using namespace std;
class student
{
public:
    int id;
    double gpa;
void display()
{
    cout<< id <<"   "<<gpa<<endl;
}
student(int x, double y)
{
    id=x;
    gpa=y;
}
student()
{
    cout<<"Default Constructor"<<endl;
}
};
int main()
{   student kob;
    student abdullah(105,3.44),muaj(108,4.00),fahad(110,3.94);
abdullah.display();
    fahad.display();
    muaj.display();


}
