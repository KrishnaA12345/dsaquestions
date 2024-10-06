/*
Check if string has all english alphabets

Given a string. You have to check if it has all english alphabets from a-z.

Input 1: abcdEfGHIJKLmnopqrstuvWXYZ

Output 1: Yes

Input 2: PhysicsWallah

Output 2: No

Explanation:

Input-1 has all the alphabets irrespective of upper or lower case, so the output is Yes. But in case of Input-2, it doesn't contain all the alphabets, hence No.
*/


//creating function to check whetaher each alphabet is present or not 
//first check if length of string is smaller than 26 than obviously all characters are not present so return false
// if larger than 26 then first convert whole string into lowercase as in set both  capital and small letter stored as differnt value 
//then after converting into lower case insert all elemnts of string intoi set so that only unique elements get stored
//now if length or size of set is ==26 then oinly all characters are present 


#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

bool checkAllAlphabets(string s){
   if(s.length()<26){
    return false;
   }
transform(s.begin(),s.end(),s.begin(), ::tolower);

set<char>alphabets;
for(auto ch:s){
    alphabets.insert(ch);
}
return(alphabets.size()==26);
}

int main(){
    string input;
    cout<<"enter a string : "<<endl;
    cin>>input;

    if(checkAllAlphabets(input))
    {
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;

}