// https://codeforces.com/problemset/problem/349/A

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// 	int n; cin >> n;
// 	vector<int> temp(n);
// 	int tf = 0, fif = 0, hun =0;
// 	unordered_map<int, int> mp;
// 	bool flag = true;
// 	for(int i=0; i<n; i++){
// 		cin >> temp[i];
// 		// if(temp[i] == 25) tf++;
// 		// else if(temp[i] == 50) fif++;
// 		// else hun++;
// 		mp[temp[i]]++;
// 		int diff_need = temp[i]-25;
// 		if(diff_need == 0) continue;
// 		else if(diff_need  == 25){
// 			if(mp[25] == 0){
// 				flag = false;
// 				break;
// 			}
// 		}
// 		else if(diff_need == 75){
// 			if(mp[25]>=3 || (mp[50]>0 and mp[25]>0)) continue;
// 			else {
// 				flag = false;
// 				break;
// 			}
// 		}
// 	}
// 	if(!flag){
// 		cout << "NO\n";
// 	}
// 	else cout << "YES\n";
// 	return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;
    vector<int> temp(n);
    unordered_map<int, int> mp; // To count the number of each bill
    bool flag = true;

    for (int i = 0; i < n; i++) {
        cin >> temp[i];

        if (temp[i] == 25) {
            mp[25]++; // Increment count of 25
        } else if (temp[i] == 50) {
            // Need one 25 for change
            if (mp[25] > 0) {
                mp[25]--; // Give change
                mp[50]++; // Increment count of 50
            } else {
                flag = false; // Can't give change
                break;
            }
        } else if (temp[i] == 100) {
            // Prefer giving one 50 and one 25 for change
            if (mp[50] > 0 && mp[25] > 0) {
                mp[50]--; // Give 50
                mp[25]--; // Give 25
            } else if (mp[25] >= 3) {
                mp[25] -= 3; // Give three 25's
            } else {
                flag = false; // Can't give change
                break;
            }
        }
    }

    if (!flag) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
    return 0;
}
