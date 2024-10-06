// *
// * *
// * * *
// * * * *


#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter value of n: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)  //print column till row number 
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}