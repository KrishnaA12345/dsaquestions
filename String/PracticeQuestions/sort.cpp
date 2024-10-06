// Given a string str,sort the given string
// constraint: the string will contain only alphabeticl characters from a-z

// ex:  INPUT :  "codingwallah"
//       OUTPUT:  "aacdghillnow"

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string countSort(string str)
{

    vector<int> freq(26, 0); // size of vector is 26,intialize all with 0
    // storing frequency of every character
    for (int i = 0; i < str.length(); i++)
    {
        int index = str[i] - 'a'; // kaunsa index hoga woh bata diya
        freq[index]++;            // frequency vector ke ander uss index pe frequency ko increase lkar diya
    }

    //create opur sorted array
    int j=0;
    for(int i=0;i<26;i++){
        while(freq[i]--){
           str[j]=i+'a';
           j++;
        }

    }
    return str;
}

int main()
{
    string str;
    cout << " enter a string to sort : " << endl;
    getline(cin, str);

    /*
    //using built in function
   sort(str.begin(),str.end());
   cout<<str;
    */
    cout << countSort(str) << endl;
}
