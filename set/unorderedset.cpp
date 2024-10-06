#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
   
    unordered_set<int>set1; // Unordered set stores values in no particular order
    
    set1.insert(3); // insert() to insert value in set 
    set1.insert(2);
    set1.insert(1);
    set1.insert(4);
    set1.insert(5);
    set1.insert(7);
    set1.insert(6);

    // Iterating over the unordered_set (no guaranteed order)
    for (auto value : set1) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
