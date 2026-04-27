#include <bits/stdc++.h>
using namespace std;

int m;
vector<int> weights;
int dp[1005][2005][11];
int parent_w[1005][2005][11];
int parent_diff[1005][2005][11];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    cin >> m;

    for(int i = 0; i < 10; i++) {
        if(s[i] == '1') weights.push_back(i + 1);
    }

    memset(dp, -1, sizeof(dp));
    const int OFFSET = 1000;

    dp[0][OFFSET][0] = 1;

    for(int step = 0; step < m; step++) {
        for(int diff = -1000; diff <= 1000; diff++) {
            for(int last = 0; last <= 10; last++) {
                if(dp[step][diff + OFFSET][last] == 1) {
                    for(int w : weights) {
                        if(w == last) continue;
                        int new_diff = diff;
                        if(step % 2 == 0) {
                            new_diff += w;
                            if(new_diff <= 0) continue;
                        } else {
                            new_diff -= w;
                            if(new_diff >= 0) continue;
                        }
                        if(new_diff < -1000 || new_diff > 1000) continue;
                        if(dp[step + 1][new_diff + OFFSET][w] == -1) {
                            dp[step + 1][new_diff + OFFSET][w] = 1;
                            parent_w[step + 1][new_diff + OFFSET][w] = last;
                            parent_diff[step + 1][new_diff + OFFSET][w] = diff;
                        }
                    }
                }
            }
        }
    }

    int final_diff = -1, final_last = -1;

    for(int diff = -1000; diff <= 1000; diff++) {
        for(int last = 1; last <= 10; last++) {
            if(dp[m][diff + OFFSET][last] == 1) {
                final_diff = diff;
                final_last = last;
                break;
            }
        }
        if(final_diff != -1) break;
    }

    if(final_diff == -1) {
        cout << "NO\n";
        return 0;
    }

    cout << "YES\n";

    vector<int> ans;
    int step = m;
    int diff = final_diff;
    int last = final_last;

    while(step > 0) {
        ans.push_back(last);
        int prev_last = parent_w[step][diff + OFFSET][last];
        int prev_diff = parent_diff[step][diff + OFFSET][last];
        last = prev_last;
        diff = prev_diff;
        step--;
    }

    reverse(ans.begin(), ans.end());

    for(int x : ans) cout << x << " ";
    cout << "\n";

    return 0;
}