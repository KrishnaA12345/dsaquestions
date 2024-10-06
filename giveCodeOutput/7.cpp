#include<iostream>
using namespace std;

int  update(int a)
{
    int ans=a*a;
    return ans;
}

int main(){
   int a=14;
   a=update(a);        // pass by value ----- here when we pass a in update a copy of a is created in it, there is no changes in original value,but here we update original value a with the value return by function
   cout<<a<<endl;  //so here the updated value is printed 
}