#include<iostream>
using namespace std;

void sortOne(int arr[], int n) {
    // Using the two-pointer approach
    int left = 0, right = n - 1;
    while (left < right) {
        // Increment left until you find 1
        while (left < right && arr[left] == 0) {
            left++;
        }
        // Decrement right until you find 0
        while (left < right && arr[right] == 1) {
            right--;
        }
        // If left is still less than right, swap the elements
        if (left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[8] = {1, 1, 0, 0, 0, 0, 1, 0};

    // Calling function to sort
    sortOne(arr, 8);
    printArray(arr, 8);

    return 0;
}
