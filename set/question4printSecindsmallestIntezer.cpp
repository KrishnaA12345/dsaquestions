/*
given n integers(can vbe duplicate). print he second smallest integer.
if it does not exist ,print -1


INPUT1: n=4
        1 2 2 -4
output1: 1


input2: n=5
        1 2 3 1 1 
output2: 2
*/

#include<iostream>
#include<set>

using namespace std;

int main(){
    int n;
    cout<<"enter value of n: "<<endl;
    cin>>n;
    set <int > s;

    for(int i=0;i<n;i++){
        int number;
        cin>>number;
        s.insert(number);


    }

auto start_itr=s.begin();
start_itr++;

cout<<"second smallest number "<<*start_itr;
    
    }