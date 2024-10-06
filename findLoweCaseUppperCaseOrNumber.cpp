#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"enter a character: "<<endl;
    cin>>ch;

    if(ch>='0'&& ch<='9')
    {
        cout<<"enterted character is number"<<endl;
    }
    else if(ch>='a'&& ch<='z')
    {
        cout<<"entered character is lower case character"<<endl;
    } 
    else  if(ch>='A'&& ch<='Z'){
        cout<<"entered character is upper case character"<<endl;
    }
    else{
        cout<<"give correct input";
    }
}