// Enter a number: 4
// 1 2 3 4
//   2 3 4
//     3 4
//       4

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        int count=i;
        for(int j=1;j<=i-1;j++)
        {
            cout<<"  ";
        }
        for(int k=1;k<=n-i+1;k++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}