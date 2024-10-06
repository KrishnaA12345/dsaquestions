// #include<iostream>
// using namespace std;

// int main()
// {
//     int a,b;
//     cout<<"enter number : ";
//     cin>>a;
//     cout<<"enter power : ";
//     cin>>b;

//     int ans=1;
//     for(int i=1;i<=b;i++){
//         ans=ans*a;
//     }
//     cout<<a<<" ki power "<<b<<" is: "<<ans;
//     return 0;
// }

// creating function of it

#include <iostream>
using namespace std;

int pow(int a, int b)
{
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}

int main()
{
    int a,b;
    cout<<"enter number : ";
    cin>>a;
    cout<<"enter power : ";
    cin>>b;

    int ans = pow(a, b);

    cout << a << " ki power " << b << " is: " << ans;
    return 0;
}