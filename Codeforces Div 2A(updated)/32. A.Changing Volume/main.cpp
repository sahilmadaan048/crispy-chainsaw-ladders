// https://codeforces.com/problemset/problem/1255/A

#include <bits/stdc++.h>
using namespace std;
#define ll             long long int 
#define fast           ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define tc             int t; cin>>t;
#define vi             vector<int>

void solve(){
    int a, b;
    cin >> a >> b;
    
    if (a == b) {
        cout << 0 << endl;
        return;
    }
    
    if (a > b) swap(a, b);  // Ensure a is always smaller than b
    
    int diff = b - a;
    int cnt = diff / 5;  // Number of 5-step moves
    diff %= 5;
    
    cnt += diff / 2;  // Number of 2-step moves
    diff %= 2;
    
    cnt += diff;  // Remaining 1-step moves
    
    cout << cnt << endl;
}

int main(){
    fast;
    tc;
    while(t--) {
        solve();
    }
    return 0;
}
