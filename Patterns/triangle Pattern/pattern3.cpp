// 1
// 2 3
// 3 4 5
// 4 5 6 7
// 5 6 7 8 9


// //print pattern using count variable

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"enter value of n: "<<endl;
//     cin>>n;
    
//     for(int i=1;i<=n;i++)
//     {
//         int count=i;  //iniotialize count with row number  
//         for(int j=0;j<i;j++)  //print column till row number 
//         {
//             cout<<count<<" "; 
//             count++;      //print count
//         }
//         cout<<endl;
//     }
// }



//print pattern without using another variable

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter value of n: "<<endl;
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        
        for(int j=1;j<=i;j++)  //print column till row number 
        {   
            int b=i+j-1;  //use  i and j 
            cout<<b<<" "; 
            b++;
                 
        }
        cout<<endl;
    }
}