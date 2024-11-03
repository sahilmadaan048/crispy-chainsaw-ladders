// https://codeforces.com/problemset/problem/34/B

#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int n, m;
	cin >> n >> m ;
 
	vector<int> temp(n);
	int sum = 0 ;
	for(int i = 0 ; i<n ; i++){
		cin >> temp[i];
	}
 
 
	//bob will earn max profit if he buys the cheaoest things 
	//so better to sort it in increasing order
	//then traverse throufght he sorted array m time
	//do sum += temp[i] if temp[i] is negatoive 
	// else subtract that value from the tortal sum since if its
	//proce is posiitve boib will have too pay the positive price /
	//or other way to put it that willl be considered a loss for bOB
	
	sort(temp.begin(), temp.end());
	for(int i = 0 ;i< m && temp[i] < 0 ; i++){
		if(temp[i] < 0){
			sum += abs(temp[i]);
		}
}
 
	cout << sum << endl;
}