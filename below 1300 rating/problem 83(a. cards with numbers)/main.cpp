

//i have to write it in a way that it gets ubmiited again
#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	bool flag = false;
    int total_pairs;
    cin >> total_pairs;
    
    vector<int> elements(2 * total_pairs);
    map<int, vector<int>> num_map;

    for (int i = 0; i < 2 * total_pairs; i++) {
        cin >> elements[i];
        num_map[elements[i]].push_back(i + 1);
    }

    vector<pair<int, int>> result;

    for (auto &elem : num_map) {
        if (elem.second.size() % 2 != 0) {
            cout << -1 << "\n";
            return 0;
        }
        
        for (int i = 0; i < elem.second.size(); i += 2) {
            result.push_back({elem.second[i], elem.second[i + 1]});
        }
    }

    for (auto &pair : result) {
        cout << pair.first << " " << pair.second << "\n";
    }

    return 0;
}
