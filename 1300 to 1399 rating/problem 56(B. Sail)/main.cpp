// https://codeforces.com/problemset/problem/298/B

#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);

int ind(char c, int diff, string &temp) {
    int cnt = 0;  // Initialize cnt as 0
    for (int i = 0; i < temp.size(); i++) {
        if (temp[i] == c) {
            cnt++;
        }
        if (cnt == diff) return i + 1;  // Return 1-based index when count matches
    }
    return 0;  // If not enough moves, return 0 (handled in main)
}

int main() {
    fast;
    int moves = 0;
    int t, sx, sy, ex, ey;
    cin >> t >> sx >> sy >> ex >> ey;
    string temp;  // Wind directions
    cin >> temp;
    
    int x_moves = ex - sx;
    int y_moves = ey - sy;
    
    unordered_map<char, int> mp;
    for (auto ch : temp) {
        mp[ch]++;
    }

    // Calculate the absolute differences
    int diff = abs(x_moves);
    int diff2 = abs(y_moves);

    // Handle x-axis movement
    if (x_moves <= 0) {
        if (mp['W'] >= diff) {
            moves = max(ind('W', diff, temp), moves);
        } else {
            cout << -1 << "\n";
            return 0;
        }
    } else {
        if (mp['E'] >= diff) {
            moves = max(ind('E', diff, temp), moves);
        } else {
            cout << -1 << "\n";
            return 0;
        }
    }

    // Handle y-axis movement
    if (y_moves <= 0) {
        if (mp['S'] >= diff2) {
            moves = max(ind('S', diff2, temp), moves);
        } else {
            cout << -1 << "\n";
            return 0;
        }
    } else {
        if (mp['N'] >= diff2) {
            moves = max(ind('N', diff2, temp), moves);
        } else {
            cout << -1 << "\n";
            return 0;
        }
    }

    // Print the final answer (earliest time step when destination is reached)
    cout << moves << "\n";
    return 0;
}