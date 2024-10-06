#include<iostream>
using namespace std;

int update(int a)
{
    a-=5;
    return a;
}

int main(){
   int a=15;
   update(a);        // pass by value ----- here when we pass a in update a copy of a is created in it, there is no changes in original value
   cout<<a<<endl;  //when we come out of the update function in main function we have original value of a there is no chnage in it 
}