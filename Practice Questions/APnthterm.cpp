#include<iostream>
using namespace std;

// Function to calculate the nth term of the A.P.
int AP(int n)
{
    int nthTerm = 3 * n + 7;
    return nthTerm;
}

int main() {
    int n;
    cout << "Enter the term you want to find for an A.P: " << endl;
    cin >> n;

    // Calling the AP function to get the nth term
    int ans = AP(n);
    cout << "The nth term is: " << ans << endl;
    
    return 0;
}
