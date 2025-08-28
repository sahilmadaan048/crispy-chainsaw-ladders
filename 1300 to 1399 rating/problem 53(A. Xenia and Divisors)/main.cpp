// https://codeforces.com/problemset/problem/342/A


#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    map<int, int> count;
    
    // Read the input and count occurrences of each number
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        count[arr[i]]++;
    }
    
    vector<vector<int>> result;

    // Try to form (1, 2, 4) triplets
    while (count[1] > 0 && count[2] > 0 && count[4] > 0) {
        result.push_back({1, 2, 4});
        count[1]--;
        count[2]--;
        count[4]--;
    }

    // Try to form (1, 2, 6) triplets
    while (count[1] > 0 && count[2] > 0 && count[6] > 0) {
        result.push_back({1, 2, 6});
        count[1]--;
        count[2]--;
        count[6]--;
    }

    // Try to form (1, 3, 6) triplets
    while (count[1] > 0 && count[3] > 0 && count[6] > 0) {
        result.push_back({1, 3, 6});
        count[1]--;
        count[3]--;
        count[6]--;
    }

    // Check if any numbers remain unused
    if (count[1] > 0 || count[2] > 0 || count[3] > 0 || count[4] > 0 || count[5] > 0 || count[6] > 0 || count[7] > 0) {
        cout << -1 << endl;
    } else {
        // Output the triplets
        for (auto &triplet : result) {
            for (int num : triplet) {
                cout << num << " ";
            }
            cout << endl;
        }
    }

    return 0;
}