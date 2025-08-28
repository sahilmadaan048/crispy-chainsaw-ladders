// https://codeforces.com/problemset/problem/431/B

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n = 5;
	vector<vector<int>> temp(n, vector<int>(n));
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> temp[i][j];
		}
	}
	//we have taken the input from inputf.in
	int p[n], pans[n], ans=-1, tmp;
	for(int i=0; i<n; i++) p[i] = i;
	do{
		//add all the sums for this perumation
        tmp = temp[p[0]][p[1]] + temp[p[1]][p[0]];
        tmp += temp[p[2]][p[3]] + temp[p[3]][p[2]];
        tmp += temp[p[1]][p[2]] + temp[p[2]][p[1]];
        tmp += temp[p[3]][p[4]] + temp[p[4]][p[3]];
        tmp += temp[p[2]][p[3]] + temp[p[3]][p[2]];
        tmp += temp[p[3]][p[4]] + temp[p[4]][p[3]];

        // Update the maximum happiness
        if(tmp > ans) {
            ans = tmp;
            for(int i = 0; i < n; i++) {
                pans[i] = p[i];
            }
        }
       } 
       while(next_permutation(p, p+n));

	// for(int i=0; i<n; i++) cout << pans[i] << " ";
	// cout << "\n";
	cout << ans;
	return 0;
}

