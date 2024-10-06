#include<iostream>
using namespace std;

// int main()
// {
//     int a;
//     cout<<"enter value of a :";   //terminate as encounter any space in input
//     cin>>a;

//     cout<<a;

// }


// int main()
// {
//     string a;
//     cout<<"enter value of a :";
//     cin>>a;

//     cout<<a;

// }



// int main()
// {
//     string a;
//     cout<<"enter value of a :";
//      a= cin.get();                 //cin.get() function is  used to read only first character of string

//     cout<<a;

// }

int main()
{
    string a;
    cout<<"enter value of a :";
    getline(cin, a);                 //getline(cin,string) function is  used to read entire loine or input by user 9including spaces and tab spaces
 
    cout<<a;

}