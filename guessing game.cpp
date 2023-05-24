#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
 int your_number;


    while(1)
    {

        cout<<"Guess the Number: ";
        cin>>your_number;
        int random_number = 1+rand()%5;

        if(your_number==random_number)
        {
            cout<<"OMG!!You win!!You are now a Millonear!!"<<endl<<"Random Number is : "<<random_number<<endl<<endl<<endl;
        }
        else
        {
            cout<<"Shit!!You lose!!"<<endl<<"Random Number is : "<<random_number<<endl<<endl<<endl;
        }
    }

}
