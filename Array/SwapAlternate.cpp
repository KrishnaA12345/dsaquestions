#include <iostream>
using namespace std;

void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if ((i + 1) < size)
        {

            //swap(arr[i], arr[i + 1]);
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[6] = {1, 4, 5, 7, 9, 6};
    int brr[6] = {1, 4, 5, 7, 9};
    swapAlternate(arr, 6);
    printArray(arr, 6);

    swapAlternate(brr, 5);
    printArray(brr, 5);
}