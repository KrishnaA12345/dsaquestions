#include<iostream>
#include<vector>
using namespace std;
//we have to find peak of an mountaied array means we have to find maximum element of the array
int peakIndexInMountainArray(vector<int>& arr)
{
int start=0;
int end=arr.size()-1;
int mid=(start+end)/2;
while(start<end){



if(arr[mid]>arr[mid+1])
{
    end=mid;
}
else if(arr[mid]<arr[mid+1]){
    start=mid+1;
}
mid=(start+end)/2;

}
return start;
}  

int main()
{
    int n;
    cout << "enter the size of array: ";
    cin >> n;

    vector<int> arr;
    cout << "enter array elements such that resulting array is mountained array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr.push_back(arr[i]);
    }
   

    cout<<"max element is present at : "<<peakIndexInMountainArray(arr);


    
}