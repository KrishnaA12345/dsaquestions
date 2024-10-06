// enter value of n5
//         1
//       2 2
//     3 3 3
//   4 4 4 4
// 5 5 5 5 5


#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter value of n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<"  ";
            
        }
        for(int k=1;k<=i;k++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}