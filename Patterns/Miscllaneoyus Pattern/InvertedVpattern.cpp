// Enter value of n: 9
//                   *
//                 *   *
//               *       *
//             *           *
//           *               *
//         *                   * 
//       *                       *
//     *                           *
//   *                               *



#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=n-i;j++)
        {
            cout<<"  ";
        }
        cout<<"* ";
       
        for(int j=1;j<=2*(i-1)-1;j++)
        {
            cout<<"  ";
        }
        if(i>1)
        {
          cout<<"* ";
        }
            
             cout<<endl;

    }
   
}