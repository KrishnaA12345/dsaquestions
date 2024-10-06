#include<iostream>
using namespace std;

int fibonacci(int n)
{
    int a=0;
    int b=1;
   
     int c;
    for(int i=2;i<n;i++)
    {    c=a+b;
          a=b;
          b=c;
    }

    return c;
}
int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;

    int nthTerm=fibonacci(n);
    cout<<"Nth term of fibonacci series is : "<<nthTerm<<endl;
    return 0;
}