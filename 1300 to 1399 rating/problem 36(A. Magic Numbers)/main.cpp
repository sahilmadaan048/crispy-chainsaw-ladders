// https://codeforces.com/problemset/problem/320/A

#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin >> n ;

	string s = to_string(n);
	int size = s.size();

	bool flag = true;
	if(s[0] != '1'){
		// flag  = false;
		cout << "NO" << endl;
		return 0;
	}

	//if there are two consecutive occurences of 
	for(int i = 1; i< size ; i++){
		if(s[i] != '1' && s[i] != '4'){
			flag = false;
			break;
		}
	    //     if (i > 1 && s[i] == '4' && s[i-1] == '4' && s[i-2] == '4') {
	    //         flag = false;
	    //         break;
	    //     }
	    // }

		if(i>1 && s[i]=='4' && s[i-1] == '4' && s[i-2] == '4'){
			flag = false;
			break;
		}
	}

	if(flag == true) cout << "YES" << endl;
	else cout << "NO" << endl;
}