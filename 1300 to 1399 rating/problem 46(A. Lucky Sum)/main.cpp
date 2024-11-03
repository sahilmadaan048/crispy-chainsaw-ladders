// https://codeforces.com/problemset/problem/121/A

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long

// bool lucky(int n){
// 	string temp = to_string(n);
// 	for(auto c: temp){
// 		if(c != '4' and c != '7'){
// 			return false;
// 		}
// 	}
// 	return true;
// }

// // int solve(int n){
// // 	int lo = n, hi = 1e9;
// // 	int ans = lo;
// // 	while(lo<=hi){
// // 		int mid = lo + (hi-lo)/2;
// // 		nif(lucky(mid)){
// // 			ans = mid;
// // 			hi = mid-1;
// // 		}
// // 	}
// // 	return ans;
// // }

// int main(){
// 	int l, r; cin >> l >> r;
// 	ll sum = 0;
// 	for(int i=l; i<=r; i++){
// 		// sum += solve(i);	
// 		int next = l;
// 		while(!lucky(next)){
// 			next++;
// 		}
// 		next = min(next, r);
// 		sum += next;
// 	}
// 	cout << sum << "\n";
// 	return false;
// }

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long

// bool lucky(int n) {
//     string temp = to_string(n);
//     for(auto c: temp) {
//         if(c != '4' and c != '7') {
//             return false;
//         }
//     }
//     return true;
// }

// int main() {
//     int l, r; 
//     cin >> l >> r;
//     ll sum = 0;

//     for(int i = l; i <= r; ) {
//         int next_lucky = i;
//         while (!lucky(next_lucky)) {
//             next_lucky++;
//         }
        
//         int right_bound = min(r, next_lucky);
//         sum += (right_bound - i + 1) * next_lucky;
//         i = next_lucky + 1;
//     }

//     cout << sum << "\n";
//     return 0;
// }



#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <cmath>
#include <algorithm>
using namespace std;
#define REP(i,a,b) for(int i = (a); i <= (b); ++i)
#define FORI(i,n) REP(i,1,n)
#define FOR(i,n) REP(i,0,int(n)-1)
#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define vi vector<int>
#define ll long long
#define SZ(x) ((int)((x).size()))
#define IN(x,y) ((y).find((x)) != (y).end())
#define DBG(v) cerr<<#v<<" = "<<(v)<<endl;
#define FOREACH(i,t) for (typeof(t.begin()) i = t.begin(); i != t.end(); ++i)
#define fi first
#define se second

vector<ll> all;

ll get(int a)
{
    if(a==0) return 0;
    int prev = 0;
    ll res = 0;
    FOR(i,all.size())
    {
        if(all[i] > a)
        {
            res += all[i] * (a-prev);
            return res;
        }
        res += all[i] * (all[i] - prev);
        prev = all[i];
    }
    return res;
}

int main()
{
    FORI(k,9)
    FOR(i,1<<k)
    {
        ll q = 0;
        FOR(j,k) if(i & (1<<j)) q = 10LL*q+4;
        else q = 10LL*q+7;
        all.pb(q);
    }
    sort(all.begin(), all.end());
    all.pb(4444444444LL);
    int a,b;
    scanf("%d%d", &a, &b);
    cout << get(b) - get(a-1) << endl;
    return 0;
}
