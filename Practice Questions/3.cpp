//program to find number of 1's in  a given number

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number to calculate number of one: "<<endl;

    cin>>n;
    int count =0;
    int bit;

    while(n!=0){
     bit=n&1;
     count=count+bit;
     n=n>>1;   
    }
  cout<<"Number of one in given number is: "<<count;
  return 0;
}