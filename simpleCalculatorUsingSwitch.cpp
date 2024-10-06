#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter a: " << endl;
    cin >> a;
    cout << "Enter b: " << endl;
    cin >> b;

    char operation;
    cout << "Enter operation to perform (+,-,*,/): " << endl;
    cin >> operation;

    switch (operation)
    {
    case '+':
        cout << "a+b: " << a + b << endl;
        break;

    case '-':
        cout << "a-b: " << a - b << endl;
        break;

    case '*':
        cout << "a+b: " << a * b << endl;
        break;

    case '/':
        cout << "a+b: " << a / b << endl;
        break;

    default:
        cout << "enter correct operation....!" << endl;
        break;
    }

    return 0;
}