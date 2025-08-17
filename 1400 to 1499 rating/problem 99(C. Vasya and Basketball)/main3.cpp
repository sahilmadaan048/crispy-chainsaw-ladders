#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int m; cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    // candidate thresholds: 0, all elements of a, all elements of b
    vector<int> candidates = {0};
    candidates.insert(candidates.end(), a.begin(), a.end());
    candidates.insert(candidates.end(), b.begin(), b.end());

    int bestA = -1, bestB = -1, bestDiff = LLONG_MIN;

    for (int d : candidates) {
        int cntA = upper_bound(a.begin(), a.end(), d) - a.begin();
        int cntB = upper_bound(b.begin(), b.end(), d) - b.begin();

        int scoreA = cntA * 2 + (n - cntA) * 3;
        int scoreB = cntB * 2 + (m - cntB) * 3;
        int diff = scoreA - scoreB;

        if (diff > bestDiff || (diff == bestDiff && scoreA > bestA)) {
            bestDiff = diff;
            bestA = scoreA;
            bestB = scoreB;
        }
    }

    cout << bestA << ":" << bestB << "\n";
    return 0;
}
