// enter a number: 4
// *             *
// * *         * *
// * * *     * * *
// * * * * * * * *
// * * * * * * * *
// * * *     * * *
// * *         * *
// *             *



// //printing all spaces seprately
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter a number: ";
//     cin>>n;

//    for(int i=1;i<=n;i++)
//    {
//     for(int j=1;j<=i;j++)
//     {
//         cout<<"* ";
//     }
//     for(int k=1;k<=n-i;k++)
//     {
//         cout<<"  ";
//     }
//         for(int l=1;l<=n-i;l++)
//     {
//         cout<<"  ";
//     }
//      for(int m=1;m<=i;m++)
//     {
//         cout<<"* ";
//     }
//     cout<<endl;
//    }
   
//    for(int i=1;i<=n;i++)
//    {
//     for(int j=1;j<=n-i+1;j++)
//     {
//         cout<<"* ";
//     }
//     for(int k=1;k<=i-1;k++)
//     {
//         cout<<"  ";
//     }
//         for(int l=1;l<=i-1;l++)
//     {
//         cout<<"  ";
//     }
//      for(int m=1;m<=n-i+1;m++)
//     {
//         cout<<"* ";
//     }
//     cout<<endl;
//    }
// }




//printing all spaces in one go of one i loop
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;

   for(int i=1;i<=n;i++)
   {
    for(int j=1;j<=i;j++)
    {
        cout<<"* ";
    }
    for(int k=1;k<=2*n-2*i;k++)
    {
        cout<<"  ";
    }
  
     for(int m=1;m<=i;m++)
    {
        cout<<"* ";
    }
    cout<<endl;
   }


     for(int i=n;i>=1;i--)
   {
    for(int j=1;j<=i;j++)
    {
        cout<<"* ";
    }
    for(int k=1;k<=2*n-2*i;k++)
    {
        cout<<"  ";
    }
  
     for(int m=1;m<=i;m++)
    {
        cout<<"* ";
    }
    cout<<endl;
   }
}