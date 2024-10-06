#include <iostream>
#include <set>
using namespace std;

int main() {
   
    multiset<int>set1; //in multiset values repeat ho sakti hai ,ordered rahegi 
    
    set1.insert(3); // insert() to insert value in set 
    set1.insert(2);
    set1.insert(1);
    set1.insert(2);
    set1.insert(1);
    set1.insert(3);
    set1.insert(1);

    // Iterating over the unordered_set (no guaranteed order)
    for (auto value : set1) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}