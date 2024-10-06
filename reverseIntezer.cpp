/*
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21
 

Constraints:

-2^31 <= x <= 2^31 - 1

*/

// #include<iostream>
// using namespace std;
//  int main(){

//     int n;
//     cout<<" enter a number to reverse: ";
//     cin>>n;
    
//     int rev=0;
//     while(n!=0){                            //this program succeeds only when when our program is within the range of intezer 
//                                             //after it when we multiply by 10 it will give run time errorr 
//         int digit=n%10;                       // to avoid this we use CONCEPT OF  INT_MAX AND INT_MIN    INT_MAX=2^31-1    INT_MIN= -2^31
//         rev=rev*10+digit;
//         n=n/10;

//     }
//     cout<<" reverse is: "<<rev;
//     return 0;
//  }

#include<iostream>
#include<climits>  // Include this to use INT_MIN and INT_MAX
using namespace std;

int main() {
    int n;
    cout << "Enter a number to reverse: ";
    cin >> n;
    
    int rev = 0;
    while (n != 0) {                          
        int digit = n % 10;
        
        // Check for overflow before multiplying
        if (rev > INT_MAX/10 || rev < INT_MIN/10) {
            cout << "0" << endl;
            return 0;  // Exit the program if overflow is detected
        }
        
        rev = rev * 10 + digit;
        n = n / 10;
    }
    
    cout << "Reverse is: " << rev << endl;
    return 0;
}
