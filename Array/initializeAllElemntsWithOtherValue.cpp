// #include<iostream>
// using namespace std;

// int main(){
//     int arr[5]={1};             //this trick only work for 0 , for other values it only set first value to provided value and rest other to 0
//     for(int i=0;i<5;i++)   
//     {
//      cout<<arr[i]<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[5];
   
//     fill(arr,arr+5,1);    // to set all elements of array to same value other than 0 we use fill method   Syntax: fill(start_iterator, end_iterator, value_to_set);
//     for(int i=0;i<5;i++)
//     {
//      cout<<arr[i]<<endl;
//     }
//     return 0;
// }


//set using loop

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[5];
    
//     // Fill the array using a loop
//     for(int i = 0; i < 5; i++) {
//         arr[i] = 3;
//     }
    
//     // Print the array elements
//     for(int i = 0; i < 5; i++) {
//         cout << arr[i] << endl;
//     }

//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
    int arr[5];
                                                   
    // Set the first 3 values to 1                   // arr           : The starting point of the range where the filling begins (i.e., arr[0]).
         fill(arr, arr + 3, 1);                                              // arr + 3       : The ending point of the range (not included in filling) (i.e., arr[3]).
                                                     // 1             : The value that will be set for each element in the specified range.
           

    // Set the rest of the values to 2                 // arr + 3       : The starting point of the second range where the filling begins (i.e., arr[3]).
    
    fill(arr + 3, arr + 5, 2);                                              // arr + 5       : The ending point of the range (not included in filling) (i.e., arr[5]).
                                                        // 2             : The value that will be set for each element in this specified range.
    

    for(int i = 0; i < 5; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
