// // https://codeforces.com/problemset/problem/296/A

// //the element with the max frequency  count its frequency and
// //place them with one gap in each elements 
// //this will create t-1 vacancies in the array

// #include<bits/stdc++.h>
// using namespace std;

// bool check(int maxi, int n){
// 	int rem = n-maxi;
// 	int vac = maxi-1;
// 	return vac == rem;
// }

// int main(){
// 	int n; cin >> n;
// 	unordered_map<int,int> mp;
// 	vector<int> temp(n);
// 	for(int i=00; i<n; i++){
// 		cin >> temp[i];
// 		mp[temp[i]]++;
// 	}
// 	int maxi = 0;
// 	for(auto pair: mp){
// 		maxi = max(maxi, pair.second);
// 	}
// 	// if(maxi == n){
// 		// cout << "NO\n";
// 	// }
// 	if(check(maxi, n)){
// 		cout << "YES\n";
// 	}
// 	else{
// 		cout << "NO\n";
// 	}
// 	return 0;
// }

#include <bits/stdc++.h>
using namespace std;

// Function to check if we can arrange the elements with gaps
bool check(int maxFrequency, int n) {
    int remainingElements = n - maxFrequency; // Elements that are not the most frequent
    int vacancies = maxFrequency - 1; // Gaps created by the most frequent elements
    return vacancies <= remainingElements; // Check if gaps can be filled with remaining elements
}

int main() {
    int n; 
    cin >> n; // Read the size of the array
    unordered_map<int, int> frequencyMap; // Map to store the frequency of elements
    vector<int> arr(n); // Vector to store the input array
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Read the elements into the array
        frequencyMap[arr[i]]++; // Count the frequency of each element
    }

    int maxFrequency = 0; // Variable to track the maximum frequency
    for (const auto& pair : frequencyMap) {
        maxFrequency = max(maxFrequency, pair.second); // Find the maximum frequency
    }

    // If the maximum frequency exceeds half of the total elements, rearrangement is impossible
    if (check(maxFrequency, n)) {
        cout << "YES\n"; // It's possible to rearrange
    } else {
        cout << "NO\n"; // It's not possible to rearrange
    }

    return 0;
}
