/*
Add the common elements

Given 2 vectors vì and v2. Find out the common elements between the two and return the sum of them.

Input: VI = {1, 1, 2, 3, 3, 3) V2 = {5, 6, 7, 5, 2, 3, 6)

Output: 5

Explanation: The values common between VI and V2 are: 2, 3. So, sum is 2+3 = 5.

*/

#include<iostream>
#include<set>
#include<vector>
using namespace std;

int main()
{
    int n,m;
    cout<<"enter size of both vectors"<<endl;
    cin>>m>>n;

    vector<int> v1(n);
    vector<int>v2(m);

    cout<<"enter elements of v1"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
    }

        cout<<"enter elements of v2"<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>v2[i];
    }

    int ans_sum=0;
    set<int>s1;
    //inserting elements of vector 1 in set so that get only unique and ordered values
    for(auto ele:v1){
        s1.insert(ele);
    }

    //now check if our element is present in v2 or not if present add in sum ,this can be done using find function
    
    for(auto ele:v2){
        if(s1.find(ele)!=s1.end()){ //checking each element of v2 with each element of s1 ,if find then add in sum
            ans_sum+=ele;
        }
    }

    cout<<"Ans: "<<ans_sum<<endl;
}