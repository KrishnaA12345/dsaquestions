// A B C
// B C D
// C D E


#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter value of n: "<<endl;
    cin>>n;
    char ch;
    for(int i=1;i<=n;i++)
    {   
        for(int j=1;j<=n;j++)
        {
            ch='A'+i+j-2;       //here we use logic character +row +column-2
            cout<< ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}