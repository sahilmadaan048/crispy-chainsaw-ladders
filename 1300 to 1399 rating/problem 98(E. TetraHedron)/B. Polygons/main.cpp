// https://codeforces.com/contest/166/problem/B


#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

struct pt {
    int x, y;
    pt() {}
    pt(int xx, int yy): x(xx), y(yy) {}
};

vector<pt> A;
vector<pt> B;
vector<pair<pt, int>> a; // (point, type) where type = 0 for A, 1 for B
pt pivot;

const double eps = 1e-13;

LL dist(pt a, pt b) {
    return (a.x - b.x) * 1ll * (a.x - b.x) + (a.y - b.y) * 1ll * (a.y - b.y);
}

double mina, maxa;

bool compAng(const pair<pt, int> &a, const pair<pt, int> &b) {
    double val1 = atan2(a.first.y - pivot.y, a.first.x - pivot.x);
    double val2 = atan2(b.first.y - pivot.y, b.first.x - pivot.x);
    double val = val1 - val2;
    if (fabs(val) < eps) {
        return (fabs(val2 - mina) < eps) ? 
               (dist(a.first, pivot) < dist(b.first, pivot)) : 
               (dist(a.first, pivot) > dist(b.first, pivot));
    }
    return val < 0;
}

LL vmul(int i, int j, int k) {
    LL vx = a[k].first.x - a[i].first.x;
    LL vy = a[k].first.y - a[i].first.y;
    LL ux = a[j].first.x - a[i].first.x;
    LL uy = a[j].first.y - a[i].first.y;
    return ux * vy - uy * vx;
}

bool workon() {
    a.clear();
    for (int i = 0; i < (int)A.size(); i++) a.push_back({A[i], 0});
    for (int i = 0; i < (int)B.size(); i++) a.push_back({B[i], 1});

    int mx = 0;
    for (int i = 0; i < (int)a.size(); i++) {
        if (a[i].first.x < a[mx].first.x) mx = i;
        else if (a[i].first.x == a[mx].first.x && a[i].first.y < a[mx].first.y) mx = i;
    }
    swap(a[0], a[mx]);
    pivot = a[0].first;

    mina = 1e18, maxa = -1e18;
    for (int i = 1; i < (int)a.size(); i++) {
        double ang = atan2(a[i].first.y - pivot.y, a[i].first.x - pivot.x);
        mina = min(mina, ang);
        maxa = max(maxa, ang);
    }

    sort(a.begin() + 1, a.end(), compAng);

    vector<int> conv;
    conv.push_back(0);
    conv.push_back(1);
    for (int i = 2; i < (int)a.size(); i++) {
        while (conv.size() >= 2 && vmul(conv[conv.size() - 1], i, conv[conv.size() - 2]) < 0) {
            conv.pop_back();
        }
        conv.push_back(i);
    }

    for (int idx : conv) {
        if (a[idx].second == 1) return false; // a point from B is on hull
    }
    return true;
}

void solution() {     
    int na, nb;
    cin >> na;
    for (int i = 0; i < na; i++) {
        int x, y; 
        cin >> x >> y;
        A.push_back(pt(x, y));
    }
    cin >> nb;
    for (int i = 0; i < nb; i++) {
        int x, y; 
        cin >> x >> y;
        B.push_back(pt(x, y));
    }
    
    if (!workon()) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solution();
    return 0;
}
