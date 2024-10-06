#include<iostream>
#include<vector>

using namespace std;
int getPivot(vector<int> &arr,int n){
    int start=0;
    int end=n-1;
    int mid =(start+end)/2;

    while(start<end){
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=(start+end)/2;
    }
    return start;

    }


int binarySearch(vector<int>&arr,int s,int e, int key)
{

    int start = s;
    int end = e;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (key == arr[mid])
        {
            return mid;
        }
        // go to left part
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        // go to right part
        else if (key > arr[mid])
        {

            start = mid + 1;
        }
        mid=(start+end)/2;
    }
    return -1;
}
int findPosition(vector<int> &arr,int n, int k){

    int pivot=getPivot(arr,n);
    //apply binary search on second line
    if(k>=arr[pivot]&&k<=arr[n-1]){
        return binarySearch(arr,pivot,n-1,k);
    }
    //apply binary search on first line
    else{
       return binarySearch(arr,0,pivot-1,k);
    }

}

Here's the full corrected code with the necessary fixes and optimizations:

cpp
Copy code
#include<iostream>
#include<vector>

using namespace std;

int getPivot(vector<int> &arr, int n) {
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;  // Prevent overflow

    while (start < end) {
        if (arr[mid] >= arr[0]) {
            start = mid + 1;
        } else {
            end = mid;
        }
        mid = start + (end - start) / 2;  // Prevent overflow
    }
    return start;  // Start will point to the pivot
}

int binarySearch(vector<int> &arr, int s, int e, int key) {
    int start = s;
    int end = e;
    int mid = start + (end - start) / 2;  // Prevent overflow

    while (start <= end) {
        if (key == arr[mid]) {
            return mid;
        }
        // Go to left part
        else if (key < arr[mid]) {
            end = mid - 1;
        }
        // Go to right part
        else {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;  // Prevent overflow
    }
    return -1;  // Key not found
}

int findPosition(vector<int> &arr, int n, int k) {
    int pivot = getPivot(arr, n);

    // Apply binary search on the second part
    if (k >= arr[pivot] && k <= arr[n - 1]) {
        return binarySearch(arr, pivot, n - 1, k);
    }
    // Apply binary search on the first part
    else {
        return binarySearch(arr, 0, pivot - 1, k);
    }
}

int main() {
    vector<int> arr = {3, 8, 10, 17, 1};
    
    int key;
    cout << "Enter the key to search in the array: " << endl;
    cin >> key;
    
    int position = findPosition(arr, arr.size(), key);
    
    if (position != -1) {
        cout << "Position of key is: " << position << endl;
    } else {
        cout << "Key not found." << endl;
    }
    
    return 0;
} 