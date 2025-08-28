// https://codeforces.com/problemset/problem/462/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);


// in case of integer overflow we have t0 use long long for the coins variab;e


int main() {
	fast;
    int n, k;
    cin >> n >> k;

    string cards;
    cin >> cards;

    vector<int> freq(26, 0);
    for(char c : cards) {
        freq[c - 'A']++;
    }
    sort(freq.rbegin(), freq.rend()); //sort in reverse
    ll coins = 0;

    for(int i = 0; i < 26 && k > 0; i++) {
        if (freq[i] == 0) continue;
        ll take = min(k, freq[i]);
        coins += take * take;
        k -= take;
    }
    cout << coins << endl;
    
    return 0;
}

