#include<iostream>
using namespace std;

int main(){

int num;
cout<<"enter a number: "<<endl;
cin>>num;

if(num<0)
{
    cout<<"number is negative";
}
else if(num==0)
{
    cout<<"number is zero";
}
else{
    cout<<"number is positive";
}


}