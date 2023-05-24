#include<iostream>
using namespace std;
int main()
{
    int row,col,i,j;
    cin>>row>>col;
    int a[row][col];
    for(i=0;i<row;i++)
    {
      for(j=0;j<col;j++)
      {  cout<<"A["<<i<<"]"<<"["<<j<<"]"<<" = ";
        cin>>a[i][j];
      }
    }
    cout<<"[ ";
for(i=0;i<row;i++)
{
    for(j=0;j<col;j++)
    {
        cout<<a[i][j]<<" ";
    }

    cout<<endl;

}
cout<<" ] "<<endl;
}
