// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;

// /*

// //brute force approach check all elements of first array with all other elements of second array give : TLE(time Limit Exceed)

// vector<int> findArrayIntersectionvector(vector<int> &arr1, int n, vector<int> &arr2, int m)
// {
//     vector<int> ans;
//     for (int i = 0; i < n; i++)
//     {
//         int element = arr1[i];
//         for (int j = 0; j < m; j++)
//         {
//             if (element == arr2[j])
//             {
//                 ans.push_back(element);
//                 arr2[j] = INT_MIN; // Mark the element as used
//                 break;
//             }
//         }
//     }
//     return ans;
// }

// */


// /*

// //2nd approach given that array is already in sorted order hence when we compare element of first array with second
// // ans as we find greater element toh usse aage check karne ka koi sense nhi hai as uske aage only bade elements hi milenge
// //but this approach also exceed time limit

// vector<int> findArrayIntersectionvector(vector<int> &arr1, int n, vector<int> &arr2, int m)
// {
//     vector<int> ans;
//     for (int i = 0; i < n; i++)
//     {
//         int element = arr1[i];
//         for (int j = 0; j < m; j++)
//         {
//             if(element<arr2[j]){
//                 break;
//             }
            
//             if (element == arr2[j])
//             {
//                 ans.push_back(element);
//                 arr2[j] = INT_MIN; // Mark the element as used
//                 break;
//             }
//         }
//     }
//     return ans;
// }


// */

// //third approach we have to use the given thing that both arrays are in sorted order 
// //now we are going to use a single while loop 
// //using two pointer approach  here we are initiating two pointer i and j, i starts from arr1[] and j starts from arr2[] 

// vector<int> findArrayIntersectionvector(vector<int> &arr1, int n, vector<int> &arr2, int m)
// {
//     vector<int> ans;
//     int i=0, j=0;
//     while(i<n && j<m)
//     {
//         if(arr1[i]==arr2[j]){
//             ans.push_back(arr1[i]);
//             i++;
//             j++;
//         }
//         else{
//             j++;
//         }

//     }
    
//     return ans;
// }



// int main()
// {
//     int n;
//     cout << "Enter value of n: " << endl;
//     cin >> n;
//     int m;
//     cout << "Enter value of m: " << endl;
//     cin >> m;

//     vector<int> arr1(n);
//     vector<int> arr2(m);

//     cout << "Enter elements of arr1: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr1[i];
//     }

//     cout << "Enter elements of arr2: " << endl;
//     for (int i = 0; i < m; i++)
//     {
//         cin >> arr2[i];
//     }

//     vector<int> answer = findArrayIntersectionvector(arr1, n, arr2, m);

//     if (answer.empty())
//     {
//         cout << "No intersection found between the two arrays." << endl;
//     }
//     else
//     {
//         cout << "Intersection elements are: ";
//         for (int i = 0; i < answer.size(); i++)
//         {
//             cout << answer[i] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

//try to use map

#include <iostream>
#include <vector>
#include<map>
using namespace std;


vector<int> findArrayIntersectionvector(vector<int> &arr1, int n, vector<int> &arr2, int m) {
    vector<int> ans;
    map<int, int> mp;

    // Store frequency of elements from the first array
    for(int i = 0; i < n; i++) {
        mp[arr1[i]]++;
    }

    // Check intersection with the second array
    for(int i = 0; i < m; i++) {
        if(mp[arr2[i]] > 0) {
            ans.push_back(arr2[i]);
            mp[arr2[i]]--;  // Decrease the frequency
        }
    }

    return ans;
}



int main()
{
    int n;
    cout << "Enter value of n: " << endl;
    cin >> n;
    int m;
    cout << "Enter value of m: " << endl;
    cin >> m;

    vector<int> arr1(n);
    vector<int> arr2(m);

    cout << "Enter elements of arr1: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter elements of arr2: " << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    vector<int> answer = findArrayIntersectionvector(arr1, n, arr2, m);

    if (answer.empty())
    {
        cout << "No intersection found between the two arrays." << endl;
    }
    else
    {
        cout << "Intersection elements are: ";
        for (int i = 0; i < answer.size(); i++)
        {
            cout << answer[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
