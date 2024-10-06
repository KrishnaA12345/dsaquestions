#include<iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;

    cout << "Bitwise AND: " << (a & b) << endl;
    cout << "Bitwise OR: " << (a | b) << endl;
    cout << "Bitwise XOR: " << (a ^ b) << endl;
    cout << "Bitwise NOT of b: " << (~b) << endl;
    cout << "Left shift: "<<(a<<1)<< endl;
    cout << "Left shift: "<<(a<<2)<< endl;
    cout << "Left shift: "<<(a<<3)<< endl;
    cout << "Right shift: "<<(a>>1)<< endl;
    cout << "Right shift: "<<(a>>2)<< endl;
    cout << "Right shift: "<<(a>>3)<< endl;
    cout << "Right shift: "<<(a>>3)<< endl;

    return 0;
}



// Enter value of a: 5
// Enter value of b: 3
// Bitwise AND: 1
// Bitwise OR: 7
// Bitwise XOR: 6
// Bitwise NOT of b: -4
// Left shift: 10
// Left shift: 20
// Left shift: 40
// Right shift: 2
// Right shift: 1
// Right shift: 0
// Right shift: 0
