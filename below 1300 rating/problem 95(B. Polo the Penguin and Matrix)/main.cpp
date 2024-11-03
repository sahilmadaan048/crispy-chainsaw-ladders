// https://codeforces.com/problemset/problem/289/B

#include<bits/stdc++.h>
using  namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);

int main() {
	int n, m, d; cin >> n >> m >> d;
	// vector<vector<int>> temp(n, vector<int>(m));
	vector<int> temp;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			int x; cin >> x;
			temp.push_back(x);
		}
	}
	// bool flag = true;
	int mini = INT_MAX;
	for(int i=0; i<n*m; i++){
		int moves  = 0;
		for(int j=0; j<n*m; j++){
			int doit = abs(temp[j]-temp[i]);
			if((doit%d) != 0){
				cout << -1 << "\n";
				return 0;
			}
			else{
				moves += (doit/d);
			}
		}
		mini = min(mini, moves);
	}
	cout << mini << "\n";
	return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);

// int main() {
//     fast;
//     int n, m, d;
//     cin >> n >> m >> d;

//     vector<int> temp(n * m);
//     for (int i = 0; i < n * m; i++) {
//         cin >> temp[i];
//     }

//     int mod_reference = temp[0] % d;
//     for (int i = 1; i < n * m; i++) {
//         if (temp[i] % d != mod_reference) {
//             cout << -1 << "\n"; 
//             return 0;
//         }
//     }

//     sort(temp.begin(), temp.end());

//     int median = temp[(n * m) / 2];
//     ll moves = 0;
//     for (int i = 0; i < n * m; i++) {
//         moves += abs(temp[i] - median) / d;
//     }

//     cout << moves << "\n";
//     return 0;
// }
