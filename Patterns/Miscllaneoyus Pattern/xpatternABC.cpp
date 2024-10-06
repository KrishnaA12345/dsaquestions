// nter value of n: 8
// A                           A 
//   B                       B   
//     C                   C     
//       D               D       
//         E           E
//           F       F           
//             G   G
//               H
//             I   I
//           J       J
//         K           K
//       L               L       
//     M                   M     
//   N                       N   
// O                           O 



#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    int total=n*2-1;
for(int i=1;i<=total;i++)
{
    for(int j=1;j<=total;j++)
    {
        if(j==i||j==total-i+1){
            cout<<char('A'+i-1 )<<" ";
        }
        else{
            cout<<"  ";
        }
    }
    cout<<endl;
   
}
}