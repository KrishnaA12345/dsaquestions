#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter number to which we have to find sum: ";
    cin>>n;

    int sum=0;
    for(int i=1;i<n+1;i++)
    {
        sum=sum+i;
    }
    cout<<" Sum is: "<<sum;
}

// enter number to which we have to find sum: 9
//  Sum is: 45