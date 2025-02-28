/*
A. Watching a movie
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
You have decided to watch the best moments of some movie. There are two buttons on your player

Watch the current minute of the movie. By pressing this button, you watch the current minute of the movie and the player automatically proceeds to the next minute of the movie.
Skip exactly x minutes of the movie (x is some fixed positive integer). If the player is now at the t-th minute of the movie, then as a result of pressing this button, it proceeds to the minute (t + x).
Initially the movie is turned on in the player on the first minute, and you want to watch exactly n best moments of the movie, the i-th best moment starts at the li-th minute and ends at the ri-th minute (more formally, the i-th best moment consists of minutes li, li + 1, ..., ri).

Determine, what is the minimum number of minutes of the movie you have to watch if you want to watch all the best moments

Input
The first line contains two space-separated integers n, x (1 ≤ n ≤ 50, 1 ≤ x ≤ 105) — the number of the best moments of the movie and the value of x for the second button.

The following n lines contain the descriptions of the best moments of the movie, the i-th line of the description contains two integers separated by a space li, ri (1 ≤ li ≤ ri ≤ 105).

It is guaranteed that for all integers i from 2 to n the following condition holds ri - 1  li.

Output
Output a single number — the answer to the problem.

Examples
inputCopy
2 3
5 6
10 12
outputCopy
6
inputCopy
1 1
1 100000
outputCopy
100000
Note
In the first sample, the player was initially standing on the first minute. As the minutes from the 1-st to the 4-th one don't contain interesting moments, we press the second button. Now we can not press the second button and skip 3 more minutes, because some of them contain interesting moments. Therefore, we watch the movie from the 4-th to the 6-th minute, after that the current time is 7. Similarly, we again skip 3 minutes and then watch from the 10-th to the 12-th minute of the movie. In total, we watch 6 minutes of the movie.

In the second sample, the movie is very interesting, so you'll have to watch all 100000 minutes of the movie.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, x;
	cin >> n >> x;
	cin.ignore();

	vector<int> l(n);
	vector<int> r(n);

	for(int i = 0 ; i<n ; i++){
		cin >> l[i] >> r[i];
	}

	

}	