
 //find binary of given number

 #include<iostream>                   
 #include<math.h>
 using namespace std;

//  int main(){
//    unsigned int n;
//     cout<<"Enter a number: "<<endl;                  //this code is not give correct answer for 4 ,5 binary conversion
//     cin>>n;
//     int binary=0;
//     int i= 0;
//     while(n!=0)
//     {
//         int rem=n%2;
//         binary=binary+rem*pow(10,i);
//         n=n/2;
//         i++;
//     }
//     cout<<"Binary of given number is: "<<binary;
//     return 0;

//  }

//  int main(){
//    unsigned int n;
//     cout<<"Enter a number: "<<endl;                 
//     cin>>n;
//     int binary=0;
//     int i= 0;
//     while(n!=0)
//     {
//         int bit=n&1; //here we perform AND operation on number with 1 to get last bit of the  number ,which is same as remainder we get when divide by 2
//         binary=(bit*pow(10,i))+binary;
//         n=n>>1; //right shift divide number by 2 by reducing last digit of binary number
//         i++;
//     }
//     cout<<"Binary of given number is: "<<binary;
//     return 0;

//  }


//  The correct way to handle binary representations is to store the binary digits as characters in a string rather than trying to construct an integer that mimics the binary representation.


#include <iostream>
using namespace std;

int main() {
    unsigned int n;
    cout << "Enter a number: " << endl;
    cin >> n;

    string binary = "";
    if (n == 0) {
        binary = "0";  // Special case for 0
    } else {
        while (n != 0) {
            int bit = n & 1; // Extract the last bit
            binary = to_string(bit) + binary; // Prepend to the binary string
            n = n >> 1; // Right shift to move to the next bit
        }
    }

    cout << "Binary of given number is: " << binary << endl;
    return 0;
}
