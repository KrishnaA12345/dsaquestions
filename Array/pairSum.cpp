#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector <int>> pairSum(vector<int>&arr,int s){
    vector<vector<int>> ans;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
         if(arr[i]+arr[j]==s){
            vector<int>temp;
            temp.push_back(min(arr[i],arr[j]));
            temp.push_back(max(arr[i],arr[j]));
            ans.push_back(temp);
         }
        }
    }
    sort(ans.begin(),ans.end());
    return ans;

}


int main()
{
    int n;
    cout << "Enter value of n: " << endl;
    cin >> n;
   

    vector<int> arr1(n);
 

    cout << "Enter elements of arr1: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    int s;
    cout<<"enter sum of pair you want : "<<endl;
    cin>>s; 

    vector<vector<int>>answer=pairSum(arr1,s);
    cout<<"pairs are: "<<endl;
    for(int i=0;i<answer.size();i++){
      cout << "[" << answer[i][0] << ", " << answer[i][1] << "]" << endl; 
    }

  

   return 0;
}
