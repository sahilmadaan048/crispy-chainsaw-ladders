// // #include<bits/stdc++.h>
// // using namespace std;

// // bool check(int ele, vector<int>& temp, vector<int>& temp2){
// // 	bool flag = false;
// // 	int ind1 , ind2;
// // 	int ele1, ele2;
// // 	for(int i=1; i<temp.size(); i++){
// // 		if(temp[i]%2 == 0){
// // 			ele1 = temp[i];
// // 			temp2.push_back(temp[i]);
// // 			temp.erase(temp.begin()+ind1);
// // 			break;
// // 		}
// // 	}
// // 	for(int i=ind1; i<temp.size(); i++){
// // 		if(temp[i]%ele1 == 0){
// // 			ele2 = temp[i];
// // 			temp2.push_back(ele2);
// // 			temp.erase(temp.begin()+i);
// // 			break;
// // 		}
// // 	}
// // 	if(temp2.size() == 3) return true;
// // 	else return false;
// // }

// // int main(){
// // 	int n; cin >> n;
// // 	vector<int> temp(n);
// // 	for(int i=0; i<n; i++) cin >> temp[i];
// // 	sort(temp.begin(), temp.end());
// // 	vector<vector<int>> ans;
// // 	for(int i=0; i<n/3; i++){
// // 		vector<int> temp2;
// // 		int ele = temp[0];
// // 		temp2.push_back(ele);
// // 		if(check(ele, temp, temp2)){
// // 			ans.push_back(temp2);
// // 		}
// // 		else {
// // 			temp.push_back(ele);
// // 			sort(temp.begin(), temp.end());
// // 		}
// // 	}
// // 	for(auto vec: ans){
// // 		for(auto ele: vec){
// // 			cout << ele << " ";
// // 		}
// // 		cout << "\n";
// // 	}
// // 	return 0;
// // }


// #include<bits/stdc++.h>
// using namespace std;
// unordered_set<int> st;
// bool check(int ele, vector<int>& temp, vector<int>& temp2, int n){
//     int ele1 = -1, ele2 = -1;
    
//     // Find the first even element and remove it
//     for(int i = 0; i < temp.size(); i++){
//         if(temp[i] % 2 == 0 and (st.find(temp[i]) == st.end())){
//             ele1 = temp[i];
//             temp2.push_back(ele1);
//             st.insert(ele1);
//             temp.erase(temp.begin() + i);
//             break;
//         }
//     }
    
//     if(ele1 == -1) return false;  // No even element found

//     // Find the next element divisible by ele1 and remove it
//     for(int i = 0; i < temp.size(); i++){
//         if(temp[i] % ele1 == 0 and (st.find(temp[i]) == st.end())){
//             ele2 = temp[i];
//             temp2.push_back(ele2);
//             st.insert(ele2);
//             temp.erase(temp.begin() + i);
//             break;
//         }
//     }

//     // If we found 2 elements (ele1 and ele2) to form a triplet, return true
//     if(temp2.size() == n/3) return true;
    
//     return false;
// }

// int main(){
//     int n;
//     cin >> n;
//     vector<int> temp(n);
    
//     // Read input
//     for(int i = 0; i < n; i++) cin >> temp[i];
    
//     sort(temp.begin(), temp.end());  // Sort input for easier handling
    

//     vector<vector<int>> ans;

//     // Try to create n / 3 groups
//     for(int i = 0; i < n / 3; i++){
//     	bool flag = false;
//         vector<int> temp2;
//         int ele = temp[0];  // Take the first element
//         temp2.push_back(ele);
//         temp.erase(temp.begin());  // Remove the element from temp
        
//         // Check if we can 	form a valid triplet
//         st.clear();
//         st.insert(ele);
//         if(check(ele, temp2, temp2, n)){
//         	// flag = true;
//         	// st.clear();
//         	// st.insert(ele);
//             ans.push_back(temp2);  // If valid, add it to the result
//         }
//         else {
//         	// flag = false;
//             temp.push_back(ele);  // Put the element back if no valid triplet was found
//             sort(temp.begin(), temp.end());  // Sort the vector again after re-adding
//         }
//     }

//     // Output the result
//     if(ans.size() == 3){
//     	for(auto vec: ans){
//         	for(auto ele: vec){
//             	cout << ele << " ";
//         	}
//         cout << "\n";
//     	}
//     }
//     else{
//     	cout << -1 << "\n";
//     }


//     return 0;
// }


// // #include <iostream>
// // #include <vector>
// // #include <map>
// // using namespace std;

// // int main() {
// //     int n;
// //     cin >> n;
    
// //     vector<int> arr(n);
// //     map<int, int> count;
    
// //     // Read the input and count occurrences of each number
// //     for (int i = 0; i < n; ++i) {
// //         cin >> arr[i];
// //         count[arr[i]]++;
// //     }
    
// //     vector<vector<int>> result;

// //     // Try to form (1, 2, 4) triplets
// //     while (count[1] > 0 && count[2] > 0 && count[4] > 0) {
// //         result.push_back({1, 2, 4});
// //         count[1]--;
// //         count[2]--;
// //         count[4]--;
// //     }

// //     // Try to form (1, 2, 6) triplets
// //     while (count[1] > 0 && count[2] > 0 && count[6] > 0) {
// //         result.push_back({1, 2, 6});
// //         count[1]--;
// //         count[2]--;
// //         count[6]--;
// //     }

// //     // Try to form (1, 3, 6) triplets
// //     while (count[1] > 0 && count[3] > 0 && count[6] > 0) {
// //         result.push_back({1, 3, 6});
// //         count[1]--;
// //         count[3]--;
// //         count[6]--;
// //     }

// //     // Check if any numbers remain unused
// //     if (count[1] > 0 || count[2] > 0 || count[3] > 0 || count[4] > 0 || count[5] > 0 || count[6] > 0 || count[7] > 0) {
// //         cout << -1 << endl;
// //     } else {
// //         // Output the triplets
// //         for (auto &triplet : result) {
// //             for (int num : triplet) {
// //                 cout << num << " ";
// //             }
// //             cout << endl;
// //         }
// //     }

// //     return 0;
// // }

// #include <bits/stdc++.h>
// using namespace std;

// // Function to check and form a triplet
// bool check(int ele, vector<int>& temp, vector<int>& triplet, unordered_set<int>& st) {
//     int ele1 = -1, ele2 = -1;
//     int ind1 = -1, ind2 = -2;
    
//     // Find the next element divisible by ele and not already in the set
//     for (int i = 1; i < temp.size(); i++) {
//         if (temp[i] % ele == 0 && st.find(temp[i]) == st.end()) {
//             ele1 = temp[i];
//             ind1 = i;
//             triplet.push_back(ele1);
//             st.insert(ele1);
//             temp.erase(temp.begin() + i);
//             break;
//         }
//     }
    
//     if (ele1 == -1) return false;  // No element divisible by ele found

//     // Find the next element divisible by ele1 and not already in the set
//     for (int i = ind1; i < temp.size(); i++) {
//         if (temp[i] % ele1 == 0 && st.find(temp[i]) == st.end()) {
//             ele2 = temp[i];
//             ind2 = i;
//             triplet.push_back(ele2);
//             st.insert(ele2);
//             temp.erase(temp.begin() + i);
//             break;
//         }
//     }

//     // If we found 2 elements (ele1 and ele2) to form a triplet, return true
//     return triplet.size() == 3;
// }

// int main() {
//     int n;
//     cin >> n;
    
//     vector<int> temp(n);
//     unordered_set<int> st;  // To keep track of used elements

//     // Read input
//     for (int i = 0; i < n; i++) cin >> temp[i];
    
//     sort(temp.begin(), temp.end());  // Sort input for easier handling

//     vector<vector<int>> ans;  // Store valid triplets

//     // Try to create n / 3 groups
//     for (int i = 0; i < n / 3; i++) {
//         vector<int> triplet;
        
//         int ele = -1;
//         for (int j = 0; j < temp.size(); j++) {
//             if (st.find(temp[j]) == st.end()) {
//                 ele = temp[j];
//                 triplet.push_back(ele);
//                 st.insert(ele);
//                 temp.erase(temp.begin() + j);
//                 break;
//             }
//         }

//         if (ele == -1) break;  // No available element to start a group

//         // Try to form a valid triplet with the selected element
//         if (!check(ele, temp, triplet, st)) {
//             cout << -1 << endl;
//             return 0;  // If a valid triplet can't be formed, output -1
//         }

//         ans.push_back(triplet);  // Add the valid triplet to the result
//     }

//     // If all triplets are formed, print the result
//     if (ans.size() == n / 3) {
//         for (auto& vec : ans) {
//             for (int ele : vec) {
//                 cout << ele << " ";
//             }
//             cout << "\n";
//         }
//     } else {
//         cout << -1 << endl;
//     }

//     return 0;
// }

// ### Key Fixes:

// 1. **Handling Erasure**: I’ve fixed the part where elements are erased from `temp` during iteration to avoid index shifting issues.
// 2. **Logic for Triplet Formation**: The logic for checking if a triplet can be formed remains as per your initial idea, but the placement of triplets in the `ans` array and ensuring proper iteration has been streamlined.
// 3. **Correctness**: The conditions \(a < b < c\), \(a | b\), and \(b | c align correctly with the code now, and groups are formed as expected

#include <bits/stdc++.h>
using namespace std;

// Function to check and form a triplet
bool check(int ele, vector<int>& temp, vector<int>& triplet, unordered_set<int>& st, vector<bool>& used) {
    int ele1 = -1, ele2 = -1;
    int ind1 = -1, ind2 = -2;

    // Find the next element divisible by ele and not already in the set or used in previous triplets
    for (int i = 1; i < temp.size(); i++) {
        if (temp[i] % ele == 0 && st.find(temp[i]) == st.end() && !used[temp[i]]) {
            ele1 = temp[i];
            ind1 = i;
            triplet.push_back(ele1);
            st.insert(ele1);
            used[temp[i]] = true;
            temp.erase(temp.begin() + i);
            break;
        }
    }

    if (ele1 == -1) return false; // No element divisible by ele found

    // Find the next element divisible by ele1 and not already in the set or used in previous triplets
    for (int i = ind1; i < temp.size(); i++) {
        if (temp[i] % ele1 == 0 && st.find(temp[i]) == st.end() && !used[temp[i]]) {
            ele2 = temp[i];
            ind2 = i;
            triplet.push_back(ele2);
            st.insert(ele2);
            used[temp[i]] = true;
            temp.erase(temp.begin() + i);
            break;
        }
    }

    // If we found 2 elements (ele1 and ele2) to form a triplet, return true
    return triplet.size() == 3;
}

int main() {
    int n;
    cin >> n;

    vector<int> temp(n);
    unordered_set<int> st; // To keep track of used elements
    vector<bool> used(n, false); // To keep track of elements used in previous triplets

    // Read input
    for (int i = 0; i < n; i++) cin >> temp[i];

    sort(temp.begin(), temp.end()); // Sort input for easier handling

    vector<vector<int>> ans; // Store valid triplets

    // Try to create n / 3 groups
    for (int i = 0; i < n / 3; i++) {
        vector<int> triplet;

        int ele = -1;
        for (int j = 0; j < temp.size(); j++) {
            if (st.find(temp[j]) == st.end() && !used[temp[j]]) {
                ele = temp[j];
                triplet.push_back(ele);
                st.insert(ele);
                used[temp[j]] = true;
                temp.erase(temp.begin() + j);
                break;
            }
        }

        if (ele == -1) break; // No available element to start a group

        // Try to form a valid triplet with the selected element
        if (!check(ele, temp, triplet, st, used)) {
            cout << -1 << endl;
            return 0; // If a valid triplet can't be formed, output -1
        }

        ans.push_back(triplet); // Add the valid triplet to the result
    }

    // If all triplets are formed, print the result
    if (ans.size() == n / 3) {
        for (auto& vec : ans) {
            for (int ele : vec) {
                cout << ele << " ";
            }
            cout << "\n";
        }
    } else {
        cout << -1 << endl;
    }

    return 0;
}