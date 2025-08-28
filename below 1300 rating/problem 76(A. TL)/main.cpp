// https://codeforces.com/problemset/problem/350/A

// #include<bits/stdc++.h>
// using namespace std;

// bool check(int tl, vector<int>& temp2){
// 	bool flag = true;
// 	for(auto ele: temp2){
// 		if(ele<=tl){
// 			flag = false;
// 			break;
// 		}
// 	}
// 	return flag;
// }

// int main(){
// 	int n, m; cin >> n >>m;
// 	vector<int> temp1(n), temp2(m);
// 	for(int i=0; i<n; i++) cin >> temp1[i];
// 	for(int i=0; i<m; i++) cin >> temp2[i];
// 	int tl = *max_element(temp1.begin(), temp1.end());
// 	int cnt = 0 ;
// 	for(auto ele: temp1){
// 		if(2*ele<=tl){
// 			cnt++;
// 		}
// 	}
// 	if(cnt == 0){
// 		cout << -1 << "\n";
// 		return 0;
// 	}
// 	if(check(tl, temp2) == true){
// 		cout << tl << "\n";
// 		return 0;
// 	}
// 	else{
// 		cout << -1 << "\n";
// 		return 0;
// 	}
// }

#include <bits/stdc++.h>
using namespace std;

// Function to check if all elements in temp2 are greater than the threshold `v`
bool check(int v, vector<int>& temp2) {
    for (auto ele : temp2) {
        if (ele <= v) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, m; 
    cin >> n >> m;
    vector<int> temp1(n), temp2(m);

    // Read elements of temp1 (group A)
    for (int i = 0; i < n; i++) {
        cin >> temp1[i];
    }

    // Read elements of temp2 (group B)
    for (int i = 0; i < m; i++) {
        cin >> temp2[i];
    }

    // Find the smallest element in temp1
    int minA = *min_element(temp1.begin(), temp1.end());

    // Find the largest element in temp1
    int maxA = *max_element(temp1.begin(), temp1.end());

    // The candidate value `v` should be at least twice the smallest element and greater than or equal to the maximum element
    int v = max(2 * minA, maxA);

    // Check if `v` is strictly less than all elements in temp2
    if (check(v, temp2)) {
        cout << v << "\n";  // Print the valid `v`
    } else {
        cout << -1 << "\n"; // No valid `v` found
    }

    return 0;
}
