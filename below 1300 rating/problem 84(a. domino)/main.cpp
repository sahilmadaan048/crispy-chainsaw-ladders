// https://codeforces.com/problemset/problem/353/A
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n; // number of pieces
    cin >> n;
    
    vector<pair<int, int>> pieces(n); // to store the upper and lower halves of each piece
    int s1 = 0, s2 = 0; // sums of upper and lower halves
    bool hasDifferentParityPiece = false; // flag to check if there's a piece with different parity numbers
    
    // Input and calculate the sums of upper and lower halves
    for (int i = 0; i < n; ++i) {
        int upper, lower;
        cin >> upper >> lower;
        pieces[i] = {upper, lower};
        s1 += upper;
        s2 += lower;
        
        // Check if this piece has different parity numbers
        if ((upper % 2 != lower % 2)) {
            hasDifferentParityPiece = true;
        }
    }
    
    // Case 1: Both sums are even
    if (s1 % 2 == 0 && s2 % 2 == 0) {
        cout << 0 << endl; // No need for any rotation
    }
    // Case 2: One sum is odd and the other is even (impossible to make both even)
    else if (s1 % 2 != s2 % 2) {
        cout << -1 << endl;
    }
    // Case 3: Both sums are odd
    else {
        // If there's a piece with different parity halves, we can rotate it to make the sums even
        if (hasDifferentParityPiece) {
            cout << 1 << endl;
        } else {
            cout << -1 << endl; // If no such piece exists, it's impossible to make the sums even
        }
    }

    return 0;
}
