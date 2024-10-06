#include<iostream>
using namespace std;

int countSetBit(int n){
    int count=0;
    while(n!=0)
    {
        
        if(n%2==1)
        {
            count++;
        }
        n=n>>1;
    }
    return count;
}

int main(){
    int a,b;
    cout<<"enter value of a: "<<endl;
    cin>>a;
    cout<<"enter value of b: "<<endl;
    cin>>b;

    int setbita=countSetBit(a);
    int setbitb=countSetBit(b);
    int setbit=setbita+setbitb;

    cout<<"Total numnber of set bits in a and b: "<<setbit<<endl;
    return 0;
}