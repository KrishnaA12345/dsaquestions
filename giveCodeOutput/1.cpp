#include<iostream>
using namespace std;

int main(){
    int a=1;
    int b=2;

    if(a-->0||++b>2)
    {
        cout<<"stage1 - inside if";
    }
    else{
        cout<<"stage 2 - inside else";
    }
    cout<<a<<" "<<b<<endl;
}

//output   stage1 - inside if0 2

// if condition change  in case of or only first condition is checked

//     if(++b>2||a-->0)               stage1 - inside if1 3