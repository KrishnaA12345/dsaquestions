#include<iostream>
using namespace std;

//function to find factorial
int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int nCr(int n,int r){
    int num=fact(n);
    int deno=fact(r)*fact(n-r);
    int ans= num/deno;
    return ans;
}

int main(){
    int n,r;
    cout<<" enter value of n :  ";
    cin>>n;
    cout<<" enter value of r :  ";
    cin>>r;

    int result=nCr(n,r);
    cout<<"result is: "<<result<<endl;
    return 0;

}