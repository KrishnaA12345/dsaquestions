#include<iostream>
#include<set>
using namespace std;

int main(){
   // set<int> set1; //give values in ascending order
   set<int,greater<int>> set1; //give values in descending order
    set1.insert(3); // insert() to insert value in set 
    set1.insert(2);
    set1.insert(1);
    set1.insert(4);
     set1.insert(5);
    set1.insert(7);
    set1.insert(6);

    cout << set1.size() << endl; // size() to check the size of set 

    set1.insert(3); // This insertion won't affect the set as it already contains 3
    cout << set1.size() << endl;  // The size remains the same since sets only contain unique values

    // Traversing a set
    // Create an iterator to traverse the set and use a for loop
    // Start the iterator with set1.begin() and end with set1.end()

    set<int>::iterator itr; // Creating an iterator of set type
    for(itr = set1.begin(); itr != set1.end(); itr++){
        cout << *itr << " "; // Dereferencing the iterator to print the value
    }
    cout << endl;

    //2nd way to traverse using for each loop 
    for(auto value:set1){
      cout<<value<<" ";
    }cout<<endl;

    set1.erase(4);
     for(auto value:set1){
      cout<<value<<" ";
    }cout<<endl;

    auto iter=set1.begin();
    advance(iter,4);
    set1.erase(iter);

     for(auto value:set1){
      cout<<value<<" ";
    }cout<<endl;

  auto start_itr=set1.begin();
   // advance(start_itr,1); //points to 2nd element
      start_itr++;//another way

    //   auto end_itr=set1.begin();
    // advance(end_itr,3);//points to 4th element;
    auto end_itr=set1.end();

    set1.erase(start_itr,end_itr);
    for(auto value:set1){
      cout<<value<<" ";
    }cout<<endl;

    //search operation

    if(set1.find(3)!=set1.end()){//if true it means value is not prsent as if elemnt is not present in set find function will return end iterator 
      cout<<"value is present"<<endl;
    }
    else{
      cout<<"value is not present "<<endl;
    }
    cout<<endl;

      if(set1.find(8)!=set1.end()){
      cout<<"value is present"<<endl;
    }
    else{
      cout<<"value is not present "<<endl;
    }


  

    
    return 0;
}
