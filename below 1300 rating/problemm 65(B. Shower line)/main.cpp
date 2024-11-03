// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// 	vector<vector<int>> temp(5, vector<int>(5));
// 	for(int i=0; i<5; i++){
// 		for(int j=0; j<5; j++){
// 			cin >> temp[i][j];
// 		}
// 	}	

// 	return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// 	string a, b; cin >> a >> b;
// 	unordered_map<char, int> mp1, mp2;
// 	int n = a.size();
// 	int m = b.size();
// 	for(auto ele: a) mp1[ele]++;
// 	for(auto ele: b) mp2[ele]++;
// 	if(n!=m or mp1 != mp2) {
// 		cout << "NO\n";
// 		return 0;
// 	}
// 	int cnt = 0;
// 	for(int i=0; i<n; i++){
// 		if(b[i]!=a[i]){
// 			cnt++;
// 		}
// 	}
// 	if(cnt>2){
// 		cout << "NO\n";
// 		return 0;
// 	}
// 	cout << "YES\n" << "\n";
// 	return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// 	int n, k; cin >> n >> k;
// 	vector<vector<int>> ans(n,vector<int>(n));
// 	for(int i=0; i<n; i++){
// 		for(int j=0; j<n; j++){
// 			if(i == j){
// 				ans[i][j] = k;
// 			}
// 			cout << ans[i][j] << " ";
// 		}
// 		cout << "\n";
// 	}
// 	return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// 	int n, k; cin >> n >> k;
// 	for(int i=n; i>=n-k+1; i--){
// 		cout << i << " ";
// 	}
// 	for(int i=1; i<=n-k; i++){
// 		cout << i << " " ;
// 	}
// 	return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;

// // Function to check if all elements in the array are the same
// bool same(vector<int>& temp){
//     for(int i = 1; i < temp.size(); i++){
//         if(temp[i] != temp[0]) return false;
//     }
//     return true;
// }

// int main() {
//     int n, k; 
//     cin >> n >> k;
//     vector<int> temp(n);
    
//     // Input array
//     for(int i = 0; i < n; i++){
//         cin >> temp[i];
//     }

//     // Case when k == 1 and n == 1, we can directly output 1
//     if(k == 1 && n == 1) {
//         cout << 1;
//         return 0;
//     }

//     // If all elements are the same already, no rotation needed
//     if(same(temp)) {
//         cout << 0;
//         return 0;
//     }

//     // For cases where n > 2, problem constraint should be clarified
//     if(n > 2){
//         cout << -1;
//         return 0;
//     }

//     int cnt = 0;
//     bool flag = false;

//     // Try to rotate the array and count the steps
//     while(!same(temp)) {
//         cnt++;
//         // Rotate the array by moving the element at k-1 to the end
//         temp.push_back(temp[k-1]);
//         temp.erase(temp.begin());

//         // If all elements become the same, exit the loop
//         if(same(temp)){
//             flag = true;
//             break;
//         }
//     }

//     // Output the result based on flag
//     if(flag){
//         cout << cnt;
//     } else {
//         cout << -1;
//     }

//     return 0;
// }


//the ans iam getting for this problem is wrong for thr first test case

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int last_element = a[n-1];
    int last_diff_idx = -1;
    
    for(int i = 0; i < n; i++) {
        if(a[i] != last_element) {
            last_diff_idx = i;  // Track the last different index
        }
    }

    if(last_diff_idx < k - 1) {
        cout << last_diff_idx + 1 << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
