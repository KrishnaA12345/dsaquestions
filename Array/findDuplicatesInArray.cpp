#include<iostream>
#include<vector>
using namespace std;

int findDuplicate(vector <int> &arr)
{
    int ans=0;
    // XOR ing all array elements 
    for(int i=0;i<arr.size();i++){
     ans=ans^arr[i];
    }

    //XOR [1,n-1]
    
        for(int i=1;i<arr.size();i++){
            ans=ans^i;

        }

        return ans;
    

}
int main(){
    int n;
    cout<<"enter value of n "<<endl;
    cin>>n;
 
 vector<int> arr(n);
 cout<<"enter elements from 1 to n-1 and an y one element repetive "<<endl;
 for(int i=0;i<arr.size();i++)
 {
    cin>>arr[i];
 }

  int answer=findDuplicate(arr);
  cout<<"Duplicate value is : "<<answer<<endl;




}