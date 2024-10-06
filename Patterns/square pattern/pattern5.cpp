//count print in increasing order in square pattern

// 1 2 3
// 4 5 6
// 7 8 9

// logic:
//initialize count with 1
// row 1 to  n

// column 1 to n 
// count++
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter value of n: "<<endl;
    cin>>n;
     int count=1;
    for(int i=1;i<=n;i++)
    {
       
        for(int j=0;j<n;j++)
        {
            cout<< count<<" ";
            count++;
        }
        cout<<endl;
    }
}