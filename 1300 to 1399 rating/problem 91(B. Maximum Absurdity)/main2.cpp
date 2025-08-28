    #include <bits/stdc++.h>
    using namespace std;

    using ll = long long;

    int main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int n, k;
        if (!(cin >> n >> k)) return 0;

        vector<ll> pref(n + 1, 0);
        for (int i = 1; i <= n; ++i) {
            int x; cin >> x;
            pref[i] = pref[i-1] + x;
        }

        int m = n - k + 1;               // number of windows of length k
        vector<ll> w(m + 1, 0);          // 1-based: w[i] = sum of segment starting at i
        for (int i = 1; i <= m; ++i) {
            w[i] = pref[i + k - 1] - pref[i - 1];
        }

        // pre[i] = index of best window in [1..i] (max w)
        vector<int> pre(m + 1, 0);
        pre[1] = 1;
        for (int i = 2; i <= m; ++i) {
            if (w[i] > w[pre[i-1]]) pre[i] = i;
            else pre[i] = pre[i-1];
        }

        // Now choose second window j from k+1..m, and first window i = pre[j-k]
        ll bestSum = -1;
        int ansA = 1, ansB = k+1; // default (will be overwritten)
        for (int j = k + 1; j <= m; ++j) {
            int i = pre[j - k];
            ll cur = w[i] + w[j];
            if (cur > bestSum) {
                bestSum = cur;
                ansA = i;
                ansB = j;
            }
        }

        cout << ansA << " " << ansB << "\n";
        return 0;
    }
