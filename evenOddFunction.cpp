#include<iostream>
using namespace std;

bool isEven(int n){
    if(n%2==0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n;
    cout<<"enter a number: "<<endl;
    cin>>n;

    if(isEven(n))
    {
        cout<<n<<" is even "<<endl;
    }
    else{
        cout<<n<<" is odd "<<endl;
    }
    return 0;
}