#include<iostream>
#include<string>
#include<cstring> // Use <cstring> for strcat
#include<algorithm> // Include this for the reverse function
using namespace std;

/*

//reverse string
int main() {
    string str = "hello";
    string str1=" my name is krishna";
    
    // Reverse the string in place
    reverse(str.begin(), str.end());
    
    // Output the reversed string
    cout << str<<endl;

    reverse(str1.begin(), str1.end());
    cout<<str1<<endl;
}
*/

/*

//substr()
int main(){
    string str = "hello";
    string str1="my name is krishna";

    cout<<str.substr(2)<<endl; 
    cout<<str.substr(2,2)<<endl;
    string substring=str1.substr(1,30);
    cout<<substring<<endl;


}
*/

/*
the '+' operator used to concatenate two string 
int main(){
string str = "hello";

str+=str1;
cout<<str;

return 0;
}

*/






/*
// //concat() use to conacat two character array 
int main(){
string str = "hello";
string str1=" my name is krishna";

char s1[20]="hello";
char s2[25]=" my name is krishna"; 
// strcat(str,str1); nhi hoga strcat works for character array only 
strcat(s1,s2);
cout<<s1<<endl;

return 0;
}
*/
/*
//push_back()  used to insert char at the end of string
int main(){
string str = "hello";
 char ch='o';
// string s=" motto "; //not possible to push back string for this use +
// str.push_back(s);
str.push_back(ch);

cout<<str<<endl;

return 0;
}
*/
/* 
//size()
 or length()
 return the length of the string 

 strlen(char_arrya_name)  used to reeturn the length of character array

int main(){
string str = "hello";
cout<<str.size()<<endl;
cout<<str.length()<<endl;

char s1[20]="hello";
char s2[25]=" my name is krishna"; 
cout<<strlen(s1);



return 0;
}
 */

/*
//to_string(): used to convert intezer to string 
*/
int main(){
    int num=432; 
    string str=to_string(num);
    cout<<str<<endl; 

    //let if we wannt to addd 1 at the last of this it become very easy just by appending 1 at last
     str+="1";
   cout<<str<<endl;
   //find unit digit of given number
   cout<<str[str.size()-1]<<endl;
}         





 