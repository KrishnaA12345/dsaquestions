#include<iostream>
#include<math.h>
using namespace std;

int main(){
 int n;
 bool flag=true;

 cout<<"enter a number"<<endl;
 cin>>n;

 if(n<=1)
 {
    flag=false;
 }
 else{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            flag=false;
        }
    }
 }

 if(flag){
    cout<<"number is prime";
 }
 
 else{
    cout<<"number is non-prime";
 }



}