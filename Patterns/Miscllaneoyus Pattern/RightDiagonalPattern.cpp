// Enter value of n: 7
//             *
//           *
//         *
//       *
//     *
//   *
// *


#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        cout<<"* "<<endl;
    }
}