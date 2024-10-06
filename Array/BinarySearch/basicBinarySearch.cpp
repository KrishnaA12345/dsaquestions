#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{

    int start = 0;
    int end = n - 1;
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

int main()
{
    int n;
    cout << "enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "enter array elements in sorted order either increasing or decreasing order" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "enter key you want to search : " << endl;
    cin >> key;

    int location=binarySearch(arr,n,key);
    cout<<"index of "<<key<<" is "<<location;
}