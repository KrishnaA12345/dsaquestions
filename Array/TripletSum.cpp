#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector <int>> tripletSum(vector<int>&arr,int s){
    vector<vector<int>> ans;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
       for(int k =j+1;k<arr.size()-1;k++){
          if(arr[i]+arr[j]+arr[k]==s){

            vector<int>temp;
            temp.push_back(arr[i]);
            temp.push_back(arr[j]);
            temp.push_back(arr[k]);
            ans.push_back(temp);
         }

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

    vector<vector<int>>answer=tripletSum(arr1,s);
    cout<<"triplets are: "<<endl;
    for(int i=0;i<answer.size();i++){
      cout << "[" << answer[i][0] << ", " << answer[i][1] << ", "<<  answer[i][2] << "]" << endl;
    }

   return 0;
}


//to observe all the triplets formed 

// int main()
// {
//   int n;
//   cout << "Enter value of n: " << endl;
//   cin >> n;

//   vector<int> arr(n);

//   cout << "Enter elements of arr1: " << endl;
//   for (int i = 0; i < n; i++)
//   {
//     cin >> arr[i];
//   }
//   // int s;
//   // cout<<"enter sum of triplet you want : "<<endl;
//   // cin>>s;
//   for (int i = 0; i < arr.size(); i++)
//   {
//     for (int j = i + 1; j < arr.size(); j++)
//     {
//       for (int k = j + 1; k < arr.size() - 1; k++)
//       {

//         cout << "[" << arr[i] << ", " << arr[j] << ", " << arr[k] << "]" << endl; // just to see our all iteratipons
//       }
//     }
//   }
// }
