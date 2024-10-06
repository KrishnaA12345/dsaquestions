#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n){
    if(n<2)
    {
        return false;
    }
    else{
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i!=0){
                return false;
                break;
            }
            else{
                return true;
            }
        }
    }
}

int main(){
    int n;
    cout<<"Enter a number : "<<endl;
    cin>>n;

    if(isPrime(n)){
        cout<<n<<" is Prime"<<endl;
    }
    else{
        cout<<n<<"is not prime "<<endl;
    }
    return 0;
}