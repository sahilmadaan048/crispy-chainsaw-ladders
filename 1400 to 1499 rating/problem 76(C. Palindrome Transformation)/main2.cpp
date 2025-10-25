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

    if (p > mid)
    {
        reverse(s.begin(), s.end());
        p = n - p - 1;
    }

    i = 0;
    j = n - 1;

    // move left and right from p to make palindrome
    int l = -1, r = -1;
    for (int k = 0; k < n / 2; k++)
    {
        if (s[k] != s[n - k - 1])
        {
            if (l == -1) l = k;
            r = k;
        }
    }

    if (l == -1)
    {
        cout << 0 << "\n";
        return;
    }

    // start counting letter diffs
    for (int k = 0; k < n / 2; k++)
    {
        int a = abs(s[k] - s[n - k - 1]);
        cnt += min(a, 26 - a);
    }

    // pointer movement simulation as per your flow
    if (p <= l)
    {
        cnt += (r - p);
    }
    else if (p >= r)
    {
        cnt += (p - l);
    }
    else
    {
        cnt += min(p - l, r - p) + (r - l);
    }

    cout << cnt << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    while (T--)
    {
        solve();
    }
    return 0;
}
