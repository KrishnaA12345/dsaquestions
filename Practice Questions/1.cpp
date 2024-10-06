// Subtract the product and sum of digits of an intezer
#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter number: "<<endl;
    cin>>num;


    
    int product=1;
    int sum=0;
    
    int digit;
    int ans;


    while(num!=0)
    {
     int digit=num%10;
     sum=sum+digit;
     product=product*digit;
     num=num/10;
    }
    ans=product-sum;
    cout<<"ans is: "<<ans;


    return 0;

}