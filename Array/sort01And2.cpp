#include<iostream>
using namespace std;
int sort01and2(int arr[],int n){

    //initializing three pointers left(from 1st index of array),  mid(also nfrom first index of array) and right(from last index of array)
    int left=0,mid=0,right=n-1;
    while(mid<=right){
        if(mid<=right && arr[mid]==0){
            swap(arr[left],arr[mid]);
            mid++;
            left++;
        }
        else if(mid<=right && arr[mid]==1){
            mid++;
        }

        else if(mid<=right && arr[mid]==2){
            swap(arr[mid],arr[right]);
            right--;
        }
    }

}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"enter number of elemnts you want to insert in array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort01and2( arr,n);
    printArray(arr,n);

    return 0;

}

// // uisng multiset: also a good approach but takes more time

// #include <iostream>
// #include <set>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "enter number of elemnts you want to insert in array" << endl;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     multiset<int> ms;
//     for (int i = 0; i < n; i++)
//     {
//         ms.insert(arr[i]);
//     }

//     for (auto value : ms)
//     {
//         cout << value << " ";
//     }
//     cout << endl;

//     return 0;
// }
