// 231. Power of Two
// Easy
// Topics
// Companies
// Given an integer n, return true if it is a power of two. Otherwise, return false.

// An integer n is a power of two, if there exists an integer x such that n == 2x.

// Example 1:

// Input: n = 1
// Output: true
// Explanation: 20 = 1
// Example 2:

// Input: n = 16
// Output: true
// Explanation: 24 = 16
// Example 3:

// Input: n = 3
// Output: false

// Constraints:

// -2^31 <= n <= 2^31 - 1

// 1st approach finding all the powers of two lie in the range and compare it with n

// #include<iostream>
// #include<cmath>
// using namespace std;

// bool isPowerOfTwo(int n) {
//     if (n <= 0) {
//         return false;
//     }

//     for(int i = 0; i <= 30; i++) {  // Looping up to 30 because 2^30 is slightly more than 1 billion.
//         int ans = pow(2, i);
//         if(ans == n) {
//             return true;
//         }
//     }

//     return false;
// }

// int main(){
//     int n;
//     cout << "Enter a number: " << endl;
//     cin >> n;

//     if (isPowerOfTwo(n)) {
//         cout << n << " is a power of two." << endl;
//     } else {
//         cout << n << " is not a power of two." << endl;
//     }

//     return 0;
// }

// 2nd approach intially set answer to 1 then multiply it with 2 while running loop from 0 to INT_MAX/2

// #include<iostream>
// #include<climits>
// using namespace std;

// bool isPowerOfTwo(int n) {
//     if (n <= 0) {
//         return false;
//     }
//     int ans=1;
//     for(int i = 0; i <= 30; i++) {

//         if(ans == n) {
//             return true;
//         }
//         if(ans<INT_MAX/2){
//             ans=ans*2;

//         }
//     }

//     return false;
// }

// int main(){
//     int n;
//     cout << "Enter a number: " << endl;
//     cin >> n;

//     if (isPowerOfTwo(n)) {
//         cout << n << " is a power of two." << endl;
//     } else {
//         cout << n << " is not a power of two." << endl;
//     }

//     return 0;
// }

// third approch and the most optimized approach
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n)
{
    if (n <= 0)
    {
        return false;
    }
    else
    {
        int count = 0;
        while (n != 0)
        {
            if (n % 2 == 1)
            {
                count++;
            }
            n=n>>1;
        }

        if (count == 1)
        {
            return true;
        }
         
    }

    return false;
}

int main()
{
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;

    if (isPowerOfTwo(n))
    {
        cout << n << " is a power of two." << endl;
    }
    else
    {
        cout << n << " is not a power of two." << endl;
    }

    return 0;
}
