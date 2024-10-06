// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int newArr[size];

//     for (int i = 0; i < size; i++)
//     {
//         newArr[i] = arr[size - i - 1];
//     }

//     for (int i = 0; i < size; i++)
//     {
//         cout << newArr[i] << " ";
//     }

//     return 0;
// }



//2nd Approach -using  swap method , more optimize ,here we also use functions toi make code  more readable

#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reverse(int arr[],int size)
{
    int start=0;
    int end=size-1;

    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[6]={1,4,5,7,9,6};
    int brr[5]={3,56,5,23,1};

    reverse(arr,6);
    reverse(brr,5);

    printArray(arr,6);
    printArray(brr,5);
}