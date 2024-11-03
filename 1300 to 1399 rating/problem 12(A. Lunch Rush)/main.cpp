// https://codeforces.com/problemset/problem/276/A

#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    long long k;
    cin >> n >> k;
    
    vector<long long> f(n);
    vector<long long> t(n);
    
    // Read input for restaurants
    for (int i = 0; i < n; ++i) {
        cin >> f[i] >> t[i];
    }
    
    long long maxJoy = LLONG_MIN; // Initialize maxJoy to the smallest possible value
    
    // Calculate joy for each restaurant and find the maximum
    for (int i = 0; i < n; ++i) {
        long long currentJoy;
        if (t[i] > k) {
            currentJoy = f[i] - (t[i] - k);
        } else {
            currentJoy = f[i];
        }
        maxJoy = max(maxJoy, currentJoy);
    }
    
    cout << maxJoy;
    return 0;
}