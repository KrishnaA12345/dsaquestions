#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no of terms of fibonacci you want: ";
    cin>>n;
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";

    for(int i=1;i<n-2;i++)
    {
       int next_num=a+b;
       a=b;
       b=next_num;
       cout<<next_num<<" ";
    }
return 0;
}

// output
// Enter no of terms of fibonacci you want: 10
// 0 1 1 2 3 5 8 13 21