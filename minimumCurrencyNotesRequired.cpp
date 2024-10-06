#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter total amount: "<<endl;
    cin>>n;
    int a,b,c,d,e,f,g;
    
    switch(1)
    {
        case 1:
        a=n/100;
        n=n%100;
        cout<<"total 100 rs note required = "<<a<<endl;
         case 2:
        b=n/50;
        n=n%50;
        cout<<"total 50 rs note required = "<<b<<endl;
         case 3:
        c=n/20;
        n=n%20;
        cout<<"total 20 rs note required = "<<c<<endl;
         case 4:
        d=n/10;
        n=n%10;
        cout<<"total 10 rs note required = "<<d<<endl;
         case 5:
        e=n/5;
        n=n%5;
        cout<<"total 5 rs note required = "<<e<<endl;
         case 6:
        f=n/2;
        n=n%2;
        cout<<"total 2 rs note required = "<<f<<endl;
         case 7:
        g=n/1;
        n=n%1;
        cout<<"total 1 rs note required = "<<g<<endl;
    }
    return 0;
}
