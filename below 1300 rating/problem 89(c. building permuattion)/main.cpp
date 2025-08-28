// https://codeforces.com/problemset/problem/285/C

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int n; cin >> n ;
	vector<int> temp(n);
	// unordered_set<int> st;
	for(int i=0; i<n; i++) {
		cin >> temp[i];
		// st.insert(temp[i]);
	}
	sort(temp.begin(), temp.end());
	ll ans = 0;
	// int mini = 1;
	for(int i=0; i<n; i++){
		// if(st.find(mini) != st.end()) mini++;
		// int diff = abs(ele-n);
		// if(ele<=0){
			// ans += (mini-ele);
			// mini++;
			ans += abs(temp[i]-(i+1));
		}
		// else ans += diff;
		// sort(temp.begin(), temp.end());
	// }
	cout << ans << "\n";
	return 0;
}