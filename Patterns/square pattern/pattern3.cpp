// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4

// logic:
// row 1 to  n
// ek count variable bana lo initialize with 1
// column 1 to n 
// count++

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter value of n: "<<endl;
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        int count=1;
        for(int j=0;j<n;j++)
        {
            cout<< count<<" ";
            count++;
        }
        cout<<endl;
    }
}