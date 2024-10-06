#include<iostream>
using namespace std;

// int main(){
//     int n;
//     cout<<"enter a number"<<endl;
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         cout<<i<<" ";
//     }
// }

//sum 1 to 9 

// int main(){
//     int n=9;
//    int sum=0;
//     for(int i=1;i<=n;i++)
//     {
//         sum=sum+i;
//     }
//     cout<<"sum is: "<<sum;
// }

// we have numbers 1 to n  find the sum of all even numbers 


int main(){
   int n;
   cout<<"enter a number"<<endl;
   cin>>n;
   int sum=0;
    // for(int i=1;i<=n;i++)    //
    // {
    //     if(i%2==0)
    //     {
    //      sum=sum+i;
    //     }
       
    // }

    for(int i=2;i<=n;i+=2)    //
    {
         sum=sum+i;
    }
    cout<<"sum is: "<<sum;
}