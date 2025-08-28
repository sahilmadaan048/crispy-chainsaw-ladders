// https://codeforces.com/problemset/problem/313/B

#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
#define vi vector<int>
#define fast ios_base::sync_with_stdio(false); cin.tie(0);

// Prefix sum approach to handle range queries efficiently

void solve() {
    string s; 
    cin >> s;
    int n = s.size();
    int q; 
    cin >> q;
    vi prefix(n + 1, 0); 
   
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1];
        if (s[i] == s[i - 1]) {
            prefix[i]++;
        }
    }
    while (q--) {
        int l, r; 
        cin >> l >> r;
        l--;
        r--; 
        cout << prefix[r] - prefix[l] << "\n"; 
    }
}

int main() {
    fast;
    solve(); // No need for multiple test cases here
    return 0;
}
