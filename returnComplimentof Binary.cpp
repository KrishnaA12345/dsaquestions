#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a number: "<<endl;
    cin>>n;
     

    int m=n;
    int mask=0;// Initialize a mask variable to 0

    // Special case: If the number is 0, its complement is 1

    if(n==0){
        cout<<" compliment of 0 is 1"<<endl;
    }
    else{  
    while(m!=0){
        m=m>>1;//to find the most siginificant bit in the binary of given number so that able to set mask (given number ki binary me last tak jitne 1 hai mask me iutne 1 set karne hai from right )
        mask=(mask<<1)|1;// to set 1 in mask left shift  mask and OR with 1 

    }
     // Calculate the complement of 'n' using the mask

    int ans= (~n) & mask;// by using (~n) this we get compiolemt but get varioyus extra one in left hand to remove them we can AND it with mask
    cout<<"compliment of given number is: "<< ans;
    }
}