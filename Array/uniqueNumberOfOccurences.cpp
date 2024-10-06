/*
iven an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.



Example 1:

Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.
Example 2:

Input: arr = [1,2]
Output: false
Example 3:

Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
Output: true


Constraints:

1 <= arr.length <= 1000
-1000 <= arr[i] <= 1000
*/

// using Array implementation
/*
#include <iostream>
#include <algorithm>
using namespace std;

bool unique(int arr[], int size)
{
    int ansArr[size];
    sort(arr, arr + size);
    int i = 0;
    int index=0;
    while (i < size)
    {
        int count = 1;
        for (int j = i + 1; j < size; j++)
        {

            if (arr[i] == arr[j])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        ansArr[index++] = count;
        i += count;
    }

    sort(ansArr,ansArr+index);

    for(int i=0;i<index-1;i++){
        if(ansArr[i]==ansArr[i+1]){
            return false;
        }
    }

            return true;



}

int main(){
    int arr[10] = {-3,0,1,-3,1,1,1,-3,10,0};
    if(unique(arr,10)){
        cout<<"there is unique number of occurences in array"<<endl;
    }
    else{
        cout<<"number of occurences is not unique "<<endl;
    }
}

*/

// using vector implementation

//approach: sabse phle vector ka ek frequency map bana liya fir badd me ek set banaya aur us set me map ki values ko store kar liya ,if koi do same values aayi toh 
// set me toh single hi store hogi since it stoire only unique occurence , ab set uar map dono ki suize ko comapre kara liya agr dono same hai toh unique occurences hai warna nhi hai 
// #include <iostream>
// #include <vector>
// #include <set>
// #include <map>
// using namespace std;

// bool unique(vector<int> &v)
// {
//     map<int, int> mp;
//     for (int i = 0; i < v.size(); i++)
//     {
//         mp[v[i]]++;
//     }

//     // if we want to see frequency map use below loop

//     for (auto freqmap : mp)
//     {
//         cout << freqmap.first << " " << freqmap.second << endl;
//     }

//     set<int> s;
//     for (auto freqmap : mp)
//     {
//         s.insert(freqmap.second);
//     }

//     if (s.size() == mp.size())
//     {

//         return true;
//     }
//     else
//     {

//         return false;
//     }
// }

// int main()
// {
//     int n;
//     cout << "enter number of terms: " << endl;
//     cin >> n;

//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }

//     if (unique(v))
//     {
//         cout << "number of occurences are unique " << endl;
//     }
//     else
//     {
//         cout << "number of occurences are not unique " << endl;
//     }
// }

//third approach 
//first sort the vector
//then using for loop , initialize count =1, if ith elemnt of vectoor is same as (i-1)th elsment then count ++, else set count =1 again 
//then pushback these count in new vector
//sort the new vector
// now again check if v[i]==v[i-1],means there are more than one element if same occurences ,return false
// else return true


#include <iostream>
#include<algorithm>
#include <vector>

using namespace std;

bool unique(vector<int> &arr)
{   
    sort(arr.begin(),arr.end());
    vector<int> v;
    int count =1;
    for (int i = 1; i < arr.size(); i++)
    {
        if(arr[i]==arr[i-1]){
            count++;
        }
        else{
            v.push_back(count);
            count=1;
        }


    }
    v.push_back(count); 

    sort(v.begin(),v.end());
    for(int i=1;i<v.size();i++){
       if( v[i]==v[i-1])
       {
        return false;
       }

    }
    return true;

   
}

int main()
{
    int n;
    cout << "enter number of terms: " << endl;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    if (unique(v))
    {
        cout << "number of occurences are unique " << endl;
    }
    else
    {
        cout << "number of occurences are not unique " << endl;
    }
}

