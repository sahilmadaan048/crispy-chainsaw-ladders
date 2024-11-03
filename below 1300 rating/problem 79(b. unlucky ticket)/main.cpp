// https://codeforces.com/problemset/problem/160/B

// #include <iostream>
// #include <string>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string ticket;
    
    // Input
    cin >> n;
    cin >> ticket;

    // Split the ticket into two halves
    string first_half = ticket.substr(0, n);
    string second_half = ticket.substr(n, n);
    
    // Sort both halves to make comparison easier
    sort(first_half.begin(), first_half.end());
    sort(second_half.begin(), second_half.end());
    
    // Check if all digits in the first half are less than the corresponding digits in the second half
    bool strictly_less = true;
    bool strictly_greater = true;
    
    for (int i = 0; i < n; ++i) {
        if (first_half[i] >= second_half[i]) {
            strictly_less = false;
        }
        if (first_half[i] <= second_half[i]) {
            strictly_greater = false;
        }
    }
    
    // If either strictly less or strictly greater condition is met, print "YES"
    if (strictly_less || strictly_greater) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
