// /*
// A. Dragons
// time limit per test2 seconds
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Kirito is stuck on a level of the MMORPG he is playing now. To move on in the game, he's got to defeat all n dragons that live on this level. Kirito and the dragons have strength, which is represented by an integer. In the duel between two opponents the duel's outcome is determined by their strength. Initially, Kirito's strength equals s.

// If Kirito starts duelling with the i-th (1 ≤ i ≤ n) dragon and Kirito's strength is not greater than the dragon's strength xi, then Kirito loses the duel and dies. But if Kirito's strength is greater than the dragon's strength, then he defeats the dragon and gets a bonus strength increase by yi.

// Kirito can fight the dragons in any order. Determine whether he can move on to the next level of the game, that is, defeat all dragons without a single loss.

// Input
// The first line contains two space-separated integers s and n (1 ≤ s ≤ 104, 1 ≤ n ≤ 103). Then n lines follow the i-th line contains space-separated integers xi and yi (1 ≤ xi ≤ 104, 0 ≤ yi ≤ 104) — the i-th dragon's strength and the bonus for defeating it.

// Output
// On a single line print YES (without the quotes), if Kirito can move on to the next level and print NO (without the quotes), if he can't.

// Examples
// inputCopy
// 2 2
// 1 99
// 100 0
// outputCopy
// YES
// inputCopy
// 10 1
// 100 100
// outputCopy
// NO
// Note
// In the first sample Kirito's strength initially equals 2. As the first dragon's strength is less than 2, Kirito can fight it and defeat it. After that he gets the bonus and his strength increases to 2 + 99 = 101. Now he can defeat the second dragon and move on to the next level.

// In the second sample Kirito's strength is too small to defeat the only dragon and win.


// */

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int s,n;
// 	cin >> s>> n;
// 	vector<int> str(n+1);
// 	vector<int> bonus(n+1);

// 	str[0] = s;
// 	bonus[0] = n ;
// 	int count = 0 ;
// 	for(int i = 1 ; i<=n ; i++){
// 		cin >> str[i] >> bonus[i];
// 		if(str[i-1] >= str[i]){
// 			count ++;
// 			str[i]+=bonus[i-1];

// 		}
// 	}

// 	//we have the strengths and the nonus for each level defeating a dragon
// 	if(count >= n){
// 		cout << "YES"<< endl;
// 		return 0 ;
// 	}
// 	cout << "NO" << endl;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int s, n;
// 	cin >> s >> n;

// 	vector<pair<int, int>> temp(n);

// 	for(int i = 0 ; i< n ; i++){
// 		cin >> temp[i].first >> temp[i].second ;
// 	}

// 	sort(temp.begin(), temp.end());

// 	for(int i = 1 ; i< n ; i++){
// 		if(s >= temp[i].first) {
// 			s += temp[i].second ;
// 		}
// 		else{
// 			cout << "NO" << endl;
// 			// break;
// 			return 0 ;
// 		}
// 	}

// 	cout << "YES" << endl;
// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int s, n;
//     cin >> s >> n;
//     vector<pair<int, int>> dragons(n);

//     for (int i = 0; i < n ; ++i) {
//         cin >> dragons[i].first >> dragons[i].second;
//     }

//     // Sort dragons by their strength
//     sort(dragons.begin(), dragons.end());
//     int count =0 ;

//     for (int i = 0; i < n; ++i) {
//         if (s >= dragons[i].first) {
//         	count++;
//             s += dragons[i].second;
//         } else {
//             cout << "NO" << endl;
//             return 0;
//         }
//     }

//     if(count == n) cout << "YES" << endl;
//     else cout << "NO" ;
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int s, n;
//     cin >> s >> n;
//     vector<pair<int, int>> dragons(n);

//     for (int i = 0; i < n ; ++i) {
//         cin >> dragons[i].first >> dragons[i].second;
//     }

//     // Sort dragons by their strength
//     sort(dragons.begin(), dragons.end());
//     int count = 0;

//     for (int i = 0; i < n; ++i) {
//         if (s > dragons[i].first) { // Corrected condition
//             count++;
//             s += dragons[i].second;
//         } else {
//             cout << "NO" << endl;
//             return 0;
//         }
//     }

//     if(count == n) cout << "YES" << endl;
//     else cout << "NO";
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int s, n;
//     cin >> s >> n;
//     vector<pair<int, int>> dragons(n);

//     for (int i = 0; i < n; ++i) {
//         cin >> dragons[i].first >> dragons[i].second;
//     }

//     // Sort dragons by their strength
//     // sort(dragons.begin(), dragons.end());

//     for (int i = 0; i < n; ++i) {
//         if (s > dragons[i].first) {
//             s += dragons[i].second;
//         } else {
//             cout << "NO" << endl;
//             return 0;
//         }
//     }

//     cout << "YES" << endl;
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int s, n;
    cin >> s >> n;

    vector<pair<int, int>> dragons(n);
    for (int i = 0; i < n; ++i) {
        cin >> dragons[i].first >> dragons[i].second;
    }

    // Sort dragons by their strength
    sort(dragons.begin(), dragons.end());

    bool canDefeatAll = true;
    for (const auto& dragon : dragons) {
        if (s <= dragon.first) {
            canDefeatAll = false;
            break;
        } else {
            s += dragon.second;
        }
    }

    if (canDefeatAll) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
