// https://codeforces.com/problemset/problem/450/B


// https://codeforces.com/problemset/problem/450/B

// #include<bits/stdc++.h>
// using namespace std;
// const int mod = 1e9+6;
// #define ll long long 
// #define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
// int x, y, n;
// vector<int> dp(n+1);

// int solve(int n){
// 	if(n == 1) return (x%mod);
// 	if(n == 2) return (y%mod);
// 	else if(n == 3) return ((y-x)%mod);
// 	// if(dp[n] != -1) return dp[n];
// 	return solve(n-1)%mod + solve(n-2)%mod;
// }

// int main() {
// 	fast;
// 	//this is f1 and f2
// 	cin >> x >> y;
// 	//cal fn % mod
// 	cin >> n;
// 	// for(int i=0; i<n+1; i++) dp[i] = -1;
// 	cout << solve(n)%mod << "\n";
// 	return 0;
// }

//use modulo arithmetic
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
#define ll long long 
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast;
    ll x, y, n;
    cin >> x >> y >> n;

    vector<ll> seq(6);
    seq[0] = (x % mod + mod) % mod;
    seq[1] = (y % mod + mod) % mod;
    seq[2] = (y - x) % mod;
    seq[3] = (-x) % mod;
    seq[4] = (-y) % mod;
    seq[5] = (x - y) % mod;

    ll result = seq[(n - 1) % 6];
    result = (result + mod) % mod;
    
    cout << result << "\n";
    return 0;
}