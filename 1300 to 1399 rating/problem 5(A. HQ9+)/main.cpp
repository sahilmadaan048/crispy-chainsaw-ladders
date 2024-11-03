// https://codeforces.com/problemset/problem/133/A

#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;

    unordered_set<char> s = {'H', 'Q', '9'};
    // Check if any character in the input string is an HQ9+ instruction
    for (char c : str) {
        if (s.find(c) != s.end()) {
            cout << "YES";
            return 0; // Output "YES" and exit
        }
    }
    // If no instruction found, output "NO"
    cout << "NO";

    return 0;
}