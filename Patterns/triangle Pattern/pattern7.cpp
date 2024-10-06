// A
// B C
// D E F
// G H I J

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter value of n: "<<endl;
    cin>>n;
    char ch;
    ch='A';
    for(int i=1;i<=n;i++)
    {    
        for(int j=1;j<=i;j++)
        {
                 
            cout<< ch<<" ";
              ch++;
            
        }
      
        cout<<endl;
    }
}