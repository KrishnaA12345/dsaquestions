//reverse count print in squeare pattern

// 4 3 2 1
// 4 3 2 1
// 4 3 2 1
// 4 3 2 1

// logic:
// row 1 to  n
// ek count variable bana lo initialize with n
// column 1 to n 
// count--
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter value of n: "<<endl;
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        int count=n;
        for(int j=0;j<n;j++)
        {
            cout<< count<<" ";
            count--;
        }
        cout<<endl;
    }
}