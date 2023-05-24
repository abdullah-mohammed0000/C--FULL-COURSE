#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream student;
    string name;
    int age;
    student.open("student_details.txt.",ios::out|ios::app);
    for(int i=1;i<=3;i++)
    {


    cout<<"Enter Your Name: "<<endl;
    getline(cin,name);
    student<<name<<endl;
    cout<<"Enter Your Age: "<<endl;
    cin>>age;
    cin.ignore();
    student<<age<<endl;

    }
    student.close();

}
