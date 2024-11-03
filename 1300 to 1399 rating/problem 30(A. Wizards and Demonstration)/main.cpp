// https://codeforces.com/problemset/problem/168/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);

int main(){
	int n, x, y; cin >> n >> x >> y;
	int temp = ceil((double)n*y/100.0)-x;
	cout << max(0, temp) << "\n";
}