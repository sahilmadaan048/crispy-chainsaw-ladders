/*
A. Vanya and Cards
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Vanya loves playing. He even has a special set of cards to play with. Each card has a single integer. The number on the card can be positive, negative and can even be equal to zero. The only limit is, the number on each card doesn't exceed x in the absolute value.

Natasha doesn't like when Vanya spends a long time playing, so she hid all of his cards. Vanya became sad and started looking for the cards but he only found n of them. Vanya loves the balance, so he wants the sum of all numbers on found cards equal to zero. On the other hand, he got very tired of looking for cards. Help the boy and say what is the minimum number of cards does he need to find to make the sum equal to zero?

You can assume that initially Vanya had infinitely many cards with each integer number from  - x to x.

Input
The first line contains two integers: n (1 ≤ n ≤ 1000) — the number of found cards and x (1 ≤ x ≤ 1000) — the maximum absolute value of the number on a card. The second line contains n space-separated integers — the numbers on found cards. It is guaranteed that the numbers do not exceed x in their absolute value.

Output
Print a single number — the answer to the problem.

Examples
inputCopy
3 2
-1 1 2
outputCopy
1
inputCopy
2 3
-2 -2
outputCopy
2
Note
In the first sample, Vanya needs to find a single card with number -2.

In the second sample, Vanya needs to find two cards with number 2. He can't find a single card with the required number as the numbers on the lost cards do not exceed 3 in their absolute value.


*/

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, x;
//     cin >> n >> x;

//     int sum = 0;
//     for (int i = 0; i < n; ++i) {
//         int p;
//         cin >> p;
//         sum += p;
//     }

//     sum = abs(sum);
    
//     int ans = (sum + x - 1) / x;  // This is equivalent to ceiling(sum / x)
    
//     cout << ans << endl;

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, x;
	cin >> n >> x;
	int sum = 0 ;
	int ans = 0 ;
	while(n--){
		int p;
		cin >> p;
		sum += p;
	}

	sum = abs(sum);
	if(sum == 0) ans=  0 ;

	else if((sum) <= x){
		ans = 1;
		// return 0 ; 
	}
	else {
		if(((sum))%x == 0){
			ans = (sum)/x;
		}else{
			ans = (sum/x)+1;
		}
	}
	cout << ans ;
}