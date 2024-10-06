// enter a number: 5
// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4 * * 4 3 2 1
// 1 2 3 * * * * 3 2 1
// 1 2 * * * * * * 2 1
// 1 * * * * * * * * 1


#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;

   for(int i=1;i<=n;i++)
   {
    for(int j=1;j<=n-i+1;j++)
    {
        cout<<j<<" ";
    }
    for(int k=1;k<=i-1;k++)
    {
        cout<<"* ";
    }
        for(int l=1;l<=i-1;l++)
    {
        cout<<"* ";
    }
     for(int m=n-i+1;m>=1;m--)
    {
        cout<<m<<" ";
    }
    cout<<endl;
   }
}