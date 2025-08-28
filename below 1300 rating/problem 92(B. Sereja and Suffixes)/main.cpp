// https://codeforces.com/problemset/problem/368/B
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast;
    
    int n, m;
    cin >> n >> m;
    
    vector<int> temp(n);
    for (int i = 0; i < n; i++) {
        cin >> temp[i];
    }
    
    vector<int> distinct_count(n + 1, 0);

    unordered_set<int> st;
   
    for (int i = n - 1; i >= 0; i--) {
        st.insert(temp[i]);
        distinct_count[i + 1] = st.size();
    }
    for (int i = 0; i < m; i++) {
        int l;
        cin >> l;
        cout << distinct_count[l] << "\n";
    }

    return 0;
}
