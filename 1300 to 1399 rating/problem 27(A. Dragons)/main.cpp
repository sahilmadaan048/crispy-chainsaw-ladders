// https://codeforces.com/problemset/problem/230/A

 
#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int s, n;
    cin >> s >> n;
 
    vector<pair<int, int>> dragons(n);
    for (int i = 0; i < n; ++i) {
        cin >> dragons[i].first >> dragons[i].second;
    }
 
    // Sort dragons by their strength
    sort(dragons.begin(), dragons.end());
 
    bool canDefeatAll = true;
    for (const auto& dragon : dragons) {
        if (s <= dragon.first) {
            canDefeatAll = false;
            break;
        } else {
            s += dragon.second;
        }
    }
 
    if (canDefeatAll) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
 
    return 0;
}