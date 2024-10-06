// Enter value of n: 6
// *                   * 
//   *               *
//     *           *
//       *       *
//         *   *
//           *
//         *   *
//       *       *
//     *           *
//   *               *
// *                   *


#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

   //try 1 not correct properly

    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=i-1;j++)
    //     {
    //         cout<<"  ";
    //     }
    //     cout<<"* ";
       
    //     for(int j=1;j<=2*(n-i)-1;j++)
    //     {
    //         cout<<"  ";
    //     }
    //     if(i<=n-1)
    //     {
    //       cout<<"* ";
    //     }
            
    //          cout<<endl;

    // }
   


    // for(int i=1;i<=n;i++)
    // {   
    //     for(int j=1;j<=n-i;j++)
    //     { 
    //          cout<<"  ";

    //     }
    //        cout<<"* ";
        
       
    //     for(int j=1;j<=2*(i-1)-1;j++)
    //     {
    //         cout<<"  ";
    //     }
    //     if(i>1)
    //     {
    //       cout<<"* ";
    //     }
            
    //          cout<<endl;

    // }



//try 2

// using number of rows and columns= n*2-1     and print *when row==column or column =no.of rows-row +1

int total=n*2-1;
for(int i=1;i<=total;i++)
{
    for(int j=1;j<=total;j++)
    {
        if(j==i||j==total-i+1){
            cout<<"* ";
        }
        else{
            cout<<"  ";
        }
    }
    cout<<endl;
   
}
}