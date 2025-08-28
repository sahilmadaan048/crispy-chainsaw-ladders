#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll n, k;
    cin >> n >> k;
    cout << ((n / k) % 2 ? "YES" : "NO") << "\n";
}

int main() {
    fast;
    solve();
    return 0;
}
