/*
B. Sale
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Once Bob got to a sale of old TV sets. There were n TV sets at that sale. TV set with index i costs ai bellars. Some TV sets have a negative price — their owners are ready to pay Bob if he buys their useless apparatus. Bob can «buy» any TV sets he wants. Though he's very strong, Bob can carry at most m TV sets, and he has no desire to go to the sale for the second time. Please, help Bob find out the maximum sum of money that he can earn.

Input
The first line contains two space-separated integers n and m (1 ≤ m ≤ n ≤ 100) — amount of TV sets at the sale, and amount of TV sets that Bob can carry. The following line contains n space-separated integers ai ( - 1000 ≤ ai ≤ 1000) — prices of the TV sets.

Output
Output the only number — the maximum sum of money that Bob can earn, given that he can carry at most m TV sets.

Examples
inputCopy
5 3
-6 0 35 -2 4
outputCopy
8
inputCopy
4 2
7 0 0 -7
outputCopy
7
*/

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