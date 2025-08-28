#include "bits/stdc++.h"
#define int long long
#define vi vector<int>
using namespace std;

void dfs(int node, vector<bool> &vis, vector<int> &temp, unordered_map<int, vector<int>> &g)
{
    vis[node] = true;
    temp.push_back(node);
    for (auto it : g[node])
    {
        if (!vis[it])
            dfs(it, vis, temp, g);
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;

    // If total students not divisible by 3, impossible
    if (n % 3 != 0)
    {
        cout << -1 << "\n";
        return;
    }

    unordered_map<int, vector<int>> g;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    vector<bool> vis(n + 1, false);
    vector<vector<int>> comps;

    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            vector<int> temp;
            dfs(i, vis, temp, g);
            comps.push_back(temp);
        }
    }

    vector<vector<int>> ones, twos, threes;
    for (auto &c : comps)
    {
        if (c.size() == 1)
            ones.push_back(c);
        else if (c.size() == 2)
            twos.push_back(c);
        else if (c.size() == 3)
            threes.push_back(c);
        else
        {
            cout << -1 << "\n";
            return;
        }
    }

    vector<vector<int>> ans;
    for (auto &c : threes)
        ans.push_back(c);

    if (twos.size() > ones.size())
    {
        cout << -1 << "\n";
        return;
    }

    for (size_t i = 0; i < twos.size(); i++)
    {
        vector<int> group = twos[i];
        group.push_back(ones.back()[0]);
        ones.pop_back();
        ans.push_back(group);
    }

    if (ones.size() % 3 != 0)
    {
        cout << -1 << "\n";
        return;
    }

    for (size_t i = 0; i < ones.size(); i += 3)
    {
        ans.push_back({ones[i][0], ones[i + 1][0], ones[i + 2][0]});
    }

    for (auto &group : ans)
    {
        for (auto x : group)
            cout << x << " ";
        cout << "\n";
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}
