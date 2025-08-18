// https://codeforces.com/contest/165/problem/B

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, v, sum;
    cin >> n >> k;
    int l = 1, r = n;
    while (r - l > 1)
    {
        sum = 0;
        int mid = (l + r) / 2;
        int temp = mid;
        while (temp > 0)
        {
            sum += temp;
            temp /= k;
        }
        if (sum >= n)
        {
            r = mid;
        }
        else
        {
            l = mid;
        }
    }
    cout << r;
}