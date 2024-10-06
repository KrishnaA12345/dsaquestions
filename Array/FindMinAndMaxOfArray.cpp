#include<iostream>
using namespace std;

// Function to find the maximum element in the array
int max(int arr[], int size) {
    int max = arr[0];//we can also initialize max with INT_MIN      int max=INT_MIN;
    for(int i = 0; i < size; i++) {
        if(max < arr[i]) {             //there is also a prdefined function for max that is used to find max of two maximum =max(maximum,arr[i])    isse if block ka pura kaam ho jaayega
            max = arr[i];
        }
    }
    return max;
}

// Function to find the minimum element in the array
int min(int arr[], int size) {
    int min = arr[0];                //we can also initialize max with INT_MAX     int min=INT_MAXX;
    for(int i = 0; i < size; i++) {
        if(min > arr[i]) {             //there is also a prdefined function for min that is used to find min of two minimum =min(minimum,arr[i])    isse if block ka pura kaam ho jaayega
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int n;
    cout << "Enter the size of the array you want to create: " << endl;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": " << endl;
        cin >> arr[i];
    }

    // Call max and min functions and pass the array and its size
    int maximum = max(arr, n);
    int minimum = min(arr, n);

    cout << "Maximum element of the array is: " << maximum << endl;
    cout << "Minimum element of the array is: " << minimum << endl;

    return 0;
}
