#include<iostream>
using namespace std;

int sum(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    return sum;
}

int main(){
    int n;
    cout << "Enter the size of the array you want to create: " << endl;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": " << endl;
        cin >> arr[i];
    }

    int ElementsSum = sum(arr,n);
    cout<<"sum of all elemnts = "<<ElementsSum;

    return 0;

}