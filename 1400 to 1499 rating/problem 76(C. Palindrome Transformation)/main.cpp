// https://codeforces.com/problemset/problem/486/C

#include "bits/stdc++.h"
using namespace std;

void solve()
{
    int n, p;
    cin >> n >> p;
    p--;
    string s;
    cin >> s;

    int cnt = 0;
    int mid = (n - 1) / 2;
    int i, j;

    if (p > mid) p = n - p - 1;

    i = 0;
    j = n - 1;

    vector<int> diff;
    for (int k = 0; k < n / 2; k++)
    {
        int a = abs(s[k] - s[n - k - 1]);
        a = min(a, 26 - a);
        if (a > 0)
            diff.push_back(k);
        cnt += a;
    }

    if (diff.empty())
    {
        cout << 0 << "\n";
        return;
    }
    
    int l = diff.front(), r = diff.back();
    cnt += min(abs(p - l), abs(p - r)) + (r - l);

    cout << cnt << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
