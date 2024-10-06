// enter value of n: 4
//       1 
//     1 2 1 
//   1 2 3 2 1 
// 1 2 3 4 3 2 1 


//using another variable

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"enter value of n: ";
//     cin>>n;
    
//     for(int i=1;i<=n;i++)
//     {   
//         int count=1;
//         int count2=i;
//         for(int j=1;j<=n-i;j++)
//         {
//             cout<<"  ";
            
//         }
//         for(int k=1;k<=i;k++)
//         {
//             cout<<count<<" ";
//             count++;
//         }
//         for(int l=1;l<=i-1;l++)
//         {
//             cout<<count2-1<<" ";
//             count2--;
//         }
//         cout<<endl;
//     }
// }



//without using another extra variable

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter value of n: ";
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {   
        for(int j=1;j<=n-i;j++)
        {
            cout<<"  ";
            
        }
        for(int k=1;k<=i;k++)
        {
            cout<<k<<" ";
          
        }
        for(int l=i-1;l>=1;l--)
        {
            cout<<l<<" ";
            
        }
        cout<<endl;
    }
}