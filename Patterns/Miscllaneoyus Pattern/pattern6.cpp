// enter value of n4
//       1
//     2 3
//   4 5 6
// 7 8 9 10

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter value of n: ";
    cin>>n;
    int count=1;
    for(int i=1;i<=n;i++)
    {   
        
        for(int j=1;j<=n-i;j++)
        {
            cout<<"  ";
            
        }
        for(int k=1;k<=i;k++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}