/*
Given two string s and t ,return true if t is anagram of s and false otherwise
CONSTRAINTS: string s and t will only conatin lowercase characters

INPUT :  s="anagram"  t="nagaram"   output:true
          s="bank"     t=" atm"     output:false


*/

#include <iostream>
#include <algorithm>
#include <string>
#include<vector>

using namespace std;

/*

//using inbuilt sorting functiopn first sort both arrays
// then compare each elemnt of arrays
bool isAnagram(string s, string t)
{
    if (s.length() != t.length())
    {
        return false;
    }

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != t[i])
        {
            return false;
        }
    }
    return true;
}
 */

bool isAnagram(string s, string t)
{
    if (s.length() != t.length())
    {
        return false;
    }

    vector<int> freq(26,0);

    //store frequency of each character incrementing frequency for one string and decrementing frequency for second string so that we get all frequencies 0 at last
    for(int i=0;i<s.length();i++){
        int sindex=s[i]-'a';    //these lines can also be writeen as
        freq[sindex]++;           //freq[s[i]-'a']++

        int tindex=t[i]-'a'; 
        freq[tindex]--;         //freq[t[i]-'a']--
    }
    //cheack wheather all frequencies are 0 or not
    for(int i=0;i<26;i++){
        if(freq[i]!=0){
            return false;//not anagram there is different character in  both 
        }
    }

    return true;
}


int main()
{
    string s;
    cout << "enter string s: " << endl;
    cin >> s;

    string t;
    cout << "enter string t: " << endl;
    cin >> t;

    if (isAnagram(s, t))
    {
        cout << "s and t both are anagram" << endl;
    }
    else
    {
        cout << "given strings are not anagram " << endl;
    }
}