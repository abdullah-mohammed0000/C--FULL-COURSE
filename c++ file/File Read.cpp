#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string line;

    ifstream file("file
                  read details.txt");
    while(getline(file,line))
    {
        cout<<line<<endl;
    }
    file.close();
}
