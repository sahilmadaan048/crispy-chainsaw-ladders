#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin >> n;	
	
    if((n-2)%3){ //==1 
    	cout<<"1 1 " << (n-2)<<endl;
    }else{ //==0 or ==2 
    	cout<<"1 2 " << (n-3) << endl;
    }
}

int main() {
    fast;
    solve();
    return 0;
}
