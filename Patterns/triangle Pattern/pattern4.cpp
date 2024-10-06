// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1


// //print pattern using count variable print count in reverse order

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter value of n: "<<endl;
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        int count=i;  //iniotialize count with row number  
        for(int j=0;j<i;j++)  //print column till row number 
        {
            cout<<count<<" "; 
            count--;      //print count in reverse order
        }
        cout<<endl;
    }
}
