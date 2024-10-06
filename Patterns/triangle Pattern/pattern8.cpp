// D
// C D
// B C D 
// A B C D

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter value of n: "<<endl;
    cin>>n;
    char ch;
  
    for(int i=1;i<=n;i++)
    {      ch='A'+n-i;          //initialize ch with A+total number of rows-row number 
        for(int j=1;j<=i;j++)
        {
                 
            cout<< ch<<" ";
              ch++;
            
        }
      
        cout<<endl;
    }
}