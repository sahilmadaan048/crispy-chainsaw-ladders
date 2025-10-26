// https://codeforces.com/problemset/problem/340/C
#include "bits/stdc++.h"
using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> b(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
    }

    sort(b.begin() + 1, b.end());

    vector<long long> a(n + 1);
    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        a[i] = b[i];
        sum += a[i];
    }

    long long sum2 = 0;
    long long presum = 0;
    for (int i = 2; i <= n; i++) {
        presum += (i - 1) * (a[i] - a[i - 1]);
        sum2 += presum;
    }

    sum2 *= 2;
    sum += sum2;

    long long g = gcd(sum, n);
    sum /= g;
    n /= g;

    cout << sum << " " << n << "\n";

    return 0;
}
