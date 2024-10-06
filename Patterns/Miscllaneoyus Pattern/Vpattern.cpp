// Enter value of n: 8
//   *                           *
//     *                       *
//       *                   *
//         *               *
//           *           *
//             *       *
//               *   *
//                 * 



#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=i-1;j++)
        {
            cout<<"  ";
        }
        cout<<"* ";
       
        for(int j=1;j<=2*(n-i)-1;j++)
        {
            cout<<"  ";
        }
        if(i<=n-1)
        {
          cout<<"* ";
        }
            
             cout<<endl;

    }
   
}