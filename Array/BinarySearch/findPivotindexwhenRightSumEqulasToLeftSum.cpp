//pivot index is basically that index to which the sum of all elements at bthe right of that index is equlas to the sum of all elemnts at the left of that ondex


#include <iostream>
using namespace std;

int pivotIndex(int arr[], int n) {
    int totalSum = 0;
    int leftSum = 0;

    // Calculate the total sum of the array
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    // Traverse the array and check for the pivot index
    for (int i = 0; i < n; i++) {
        // If left sum is equal to the right sum (totalSum - leftSum - arr[i])
        if (leftSum == totalSum - leftSum - arr[i]) {
            return i; // Return the pivot index
        }
        leftSum += arr[i]; // Update the left sum for the next index
    }

    return -1; // If no pivot index is found
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int pivot = pivotIndex(arr, n);
    if (pivot != -1) {
        cout << "Pivot index is: " << pivot << endl;
    } else {
        cout << "No pivot index found." << endl;
    }

    return 0;
}
