// 1 1 1 
// 2 2 2 
// 3 3 3 

// logic : print row number(i)

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter value of n: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<< i<<" ";
        }
        cout<<endl;
    }
}