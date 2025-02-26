/*
A. Little Elephant and Rozdil
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
The Little Elephant loves Ukraine very much. Most of all he loves town Rozdol (ukr. "Rozdil").

However, Rozdil is dangerous to settle, so the Little Elephant wants to go to some other town. The Little Elephant doesn't like to spend much time on travelling, so for his journey he will choose a town that needs minimum time to travel to. If there are multiple such cities, then the Little Elephant won't go anywhere.

For each town except for Rozdil you know the time needed to travel to this town. Find the town the Little Elephant will go to or print "Still Rozdil", if he stays in Rozdil.

Input
The first line contains a single integer n (1 ≤ n ≤ 105) — the number of cities. The next line contains n integers, separated by single spaces: the i-th integer represents the time needed to go from town Rozdil to the i-th town. The time values are positive integers, not exceeding 109.

You can consider the cities numbered from 1 to n, inclusive. Rozdil is not among the numbered cities.

Output
Print the answer on a single line — the number of the town the Little Elephant will go to. If there are multiple cities with minimum travel time, print "Still Rozdil" (without the quotes).

Examples
inputCopy
2
7 4
outputCopy
2
inputCopy
7
7 4 47 100 4 9 12
outputCopy
Still Rozdil
Note
In the first sample there are only two cities where the Little Elephant can go. The travel time for the first town equals 7, to the second one — 4. The town which is closest to Rodzil (the only one) is the second one, so the answer is 2.

In the second sample the closest cities are cities two and five, the travelling time to both of them equals 4, so the answer is "Still Rozdil".
*/

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n ;
// 	cin >> n ;

// 	map<int , int> timeFreq;
// 	for(int i = 0 ; i < n; i++){
// 		int x;
// 		cin >> x;
// 		timeFreq[x]++;
// 	}

// 	auto it = timeFreq.begin();
// 	if(it.second == 1) cout << (it.first);
// 	else cout << "Still Rozdil" << endl;
// }


#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n ; 
	cin.ignore();

	vector<int> times(n);
	int mini = INT_MAX;
	for(int i  = 0 ; i < n ; i++){
		cin >> times[i] ; 
		mini = min(mini, times[i]);
	}

	int count = 0 ;
	for(int i = 0 ; i< n ; i++){
		if(times[i] == mini){
			count ++;
		}
	}

	if(count > 1){
		cout << "Still Rozdil" << endl;
	}
	else{
		for(int i = 0 ; i<n ; i ++){
			if(times[i] == mini){
				cout << (i+1) << endl;
				break;
			}
		}
	}
}