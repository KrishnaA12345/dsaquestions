// 7
//        1
//       1 1
//      1 2 1
//     1 3 3 1
//    1 4 6 4 1
//   1 5 10 10 5 1
//  1 6 15 20 15 6 1

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter number : "<<endl;

    cin>>n;
    int term[n][n];

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
             // Print leading spaces for formatting
            cout<<" ";
        }

           
        // Calculate and print each value in the row
        for(int k=1;k<=i;k++)
        {
            if(k==1 || k==i )
            {
           // The first and last values in every row are 1
            term[i][k]=1;
            }
            else{
                 // Other values are sum of values just above and above left
               term[i][k]=term[i-1][k-1]+term[i-1][k];
               
            }
            cout<<term[i][k]<<" ";
            
        }
        cout<<endl;
    }
    return 0;
}