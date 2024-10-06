#include<iostream>
using namespace std;

int main(){
    string str="abcd";
    cout<<"string is: "<<str<<endl;

    string str1;
    cin>>str1;  
    cout<<"str1= "<<str1<<endl;                           //    string is: abcd
    string str2;                                          // college wallah
      getline(cin,str2);                                  // str1= college   here getline automatically take remaining part wallh of above string as input 
     cout<<"str2 : "<<str2;                              // str2 :  wallah
    
   cout<<str[2]<<endl;
   
}