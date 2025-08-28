// https://codeforces.com/problemset/problem/456/A

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int t; cin >> t;
// 	vector<pair<int,int>> temp;
// 	while(t--){
// 		int a, b; cin >> a >> b;
// 		temp.push_back(make_pair(a, b));
// 	}
// 	int n = temp.size();
// 	int ele1 = temp[0].first;
// 	int ele2 = temp[0].second;
// 	bool flag = false;
// 	for(int i=1; i<n; i++){
// 		if((temp[i].first>ele1 and temp[i].second<ele2) or (temp[i].first<ele1 and temp[i].second>ele2)){
// 			flag = true;
// 		}
// 		else{
// 			flag = false;
// 			break;
// 		}
// 	}
// 	if(flag) cout << "Happy Alex\n";
// 	else cout << "Poor Alex\n";
// 	return 0;
// }
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin >> t;
    vector<pair<int, int>> temp(t);
    
    for(int i = 0; i < t; i++){
        cin >> temp[i].first >> temp[i].second;
    }

    sort(temp.begin(), temp.end());

    bool flag = false;
    
    for(int i = 1; i < t; i++){
        if(temp[i].second < temp[i - 1].second){
            flag = true;
            break;
        }
    }

    if(flag) 
        cout << "Happy Alex\n";
    else 
        cout << "Poor Alex\n";
    
    return 0;
}
