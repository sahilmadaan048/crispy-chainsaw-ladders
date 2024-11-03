// https://codeforces.com/problemset/problem/124/A

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, a, b;
 
    cin >> n >> a >> b;
 
    vector<int> temp(n,0);
    for(int i = n-1; i>=(n-b-1); i--){
        temp[i] =1;
    }
    for(int i = 0 ;i< a ;i++){
        temp[i] = 0 ;
    }
 
    int count = 0 ;
    for(int i = 0 ;i< n; i++){
        if(temp[i] == 1){
            count ++;
        }
    }
    cout << count << endl;
    return 0;
}