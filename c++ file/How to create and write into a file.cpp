#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
 ofstream file;
 string name;
 file.open("student.txt",ios::out|ios::app);
 cout<<"Enter your Name: ";
 getline(cin,name);

 file<<"I am "<<name<<". I am a global citizen."<<endl;
 file.close();

return 0;


}
