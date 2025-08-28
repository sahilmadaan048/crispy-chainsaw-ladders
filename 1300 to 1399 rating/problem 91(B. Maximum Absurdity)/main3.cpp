#include "bits/stdc++.h"
#define int long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
using namespace std;

void solve(){
    int n, k; 
    cin >> n >> k;

    vector<int> temp(n);
    for(int i = 0; i < n; i++) cin >> temp[i];

    int a = 0, b = k; // start with first two possible non-overlapping windows
    int bestSum = accumulate(temp.begin(), temp.begin() + k, 0) + 
                  accumulate(temp.begin() + k, temp.begin() + 2*k, 0);

    int bestA = 0, bestB = k;

    for(int i = 1; i <= n - k; i++){ 
        // best first window ending before i
        int firstStart = 0, firstSum = accumulate(temp.begin(), temp.begin() + k, 0);

        for(int j = 1; j <= i - k; j++){
            int currSum = accumulate(temp.begin() + j, temp.begin() + j + k, 0);
            if(currSum > firstSum){
                firstSum = currSum;
                firstStart = j;
            }
        }

        // second window starting at i
        if(i + k - 1 >= n) break; // prevent overflow
        int secondSum = accumulate(temp.begin() + i, temp.begin() + i + k, 0);

        if(firstSum + secondSum > bestSum){
            bestSum = firstSum + secondSum;
            bestA = firstStart;
            bestB = i;
        }
    }

    cout << bestA + 1 << " " << bestB + 1 << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}
