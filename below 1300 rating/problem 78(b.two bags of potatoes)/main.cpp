// https://codeforces.com/problemset/problem/239/A

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int y,k,n;
// 	cin >> y >> k >> n;
// 	bool flag = false;
// 	for(int i=1; i<=n-y; i++){
// 		if((i+y) % k == 0){
// 			flag = true;
// 			cout << i << " ";
// 		}
// 	}
// 	if(!flag){
// 		cout << -1 << " ";
// 	}
// 	return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int y, k, n;
    cin >> y >> k >> n;

    // Start from the first multiple of k greater than y
    int start = ((y / k) + 1) * k;
    bool flag = false;

    for (int i = start; i <= n; i += k) {
        cout << (i - y) << " ";
        flag = true;
    }

    if (!flag) {
        cout << -1;
    }

    return 0;
}
