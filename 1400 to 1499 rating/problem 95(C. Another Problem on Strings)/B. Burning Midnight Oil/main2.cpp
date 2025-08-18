#define _CRT_SECURE_NO_DEPRECATE
#define _USE_MATH_DEFINES

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <vector>
#include <map>
#include <set>
#include <sstream>
#include <cstring>
#include <string>
#include <queue>

#pragma comment(linker, "/STACK:64000000") 

using namespace std;

typedef long long int64;
typedef pair<int,int> pii;
typedef pair<int,double> pid;
typedef pair<double, double> pdd;
typedef pair<pii, int> piii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vpii;
typedef vector<vpii> vvpii;

#define xn _dsfhsdfsj
#define yn _dthsdfshj

int64 n, k;

inline int check(int64 v)
{
    int64 cur = 0;
    while (v)
    {
        cur += v;
        if (cur >= n) return 1;
        v /= k;
    }
    return 0;
}

int main()
{
    //freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);

    cin >> n >> k;
    int64 res = n + 1;
    int64 l = 0, r = n;
    while (l <= r)
    {
        int64 mid = (l + r) / 2;
        if (check(mid))
        {
            r = mid - 1;
            res = mid;
        } else {
            l = mid + 1;
        }
    }

    cout << res << endl;

    return 0;
}