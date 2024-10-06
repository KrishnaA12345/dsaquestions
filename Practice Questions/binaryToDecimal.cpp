#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"enter a binary number: ";
    cin>>n;

    int i=0;int ans=0;
    while(n!=0)
    {
        int digit=n%10;
        ans=ans+digit*pow(2,i);
        i++;
        n=n/10;
    }
cout<<"decimal value is: "<<ans;
return 0;

}