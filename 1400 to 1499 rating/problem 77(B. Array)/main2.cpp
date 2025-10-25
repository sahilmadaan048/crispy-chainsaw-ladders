#include "bits/stdc++.h"
#define int long long
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    unordered_map<int, int> freq;
    int distinct = 0;
    int l = 0, ansl = -1, ansr = -1;

    for (int r = 0; r < n; r++) {
        freq[a[r]]++;
        if (freq[a[r]] == 1) distinct++;

        // If we have k distinct elements
        if (distinct == k) {
            // Try to shrink from left while we can
            while (freq[a[l]] > 1) {
                freq[a[l]]--;
                l++;
            }
            ansl = l + 1;  // 1-based indexing
            ansr = r + 1;
            break; // minimal segment found
        }
    }

    if (ansl == -1) cout << "-1 -1\n";
    else cout << ansl << " " << ansr << "\n";
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    while (T--) solve();
    return 0;
}
