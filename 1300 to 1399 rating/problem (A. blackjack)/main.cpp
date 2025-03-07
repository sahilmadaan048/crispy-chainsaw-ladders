/*
A. Blackjack
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
One rainy gloomy evening when all modules hid in the nearby cafes to drink hot energetic cocktails, the Hexadecimal virus decided to fly over the Mainframe to look for a Great Idea. And she has found one!

Why not make her own Codeforces, with blackjack and other really cool stuff? Many people will surely be willing to visit this splendid shrine of high culture.

In Mainframe a standard pack of 52 cards is used to play blackjack. The pack contains cards of 13 values: 2, 3, 4, 5, 6, 7, 8, 9, 10, jacks, queens, kings and aces. Each value also exists in one of four suits: hearts, diamonds, clubs and spades. Also, each card earns some value in points assigned to it: cards with value from two to ten earn from 2 to 10 points, correspondingly. An ace can either earn 1 or 11, whatever the player wishes. The picture cards (king, queen and jack) earn 10 points. The number of points a card earns does not depend on the suit. The rules of the game are very simple. The player gets two cards, if the sum of points of those cards equals n, then the player wins, otherwise the player loses.

The player has already got the first card, it's the queen of spades. To evaluate chances for victory, you should determine how many ways there are to get the second card so that the sum of points exactly equals n.

Input
The only line contains n (1 ≤ n ≤ 25) — the required sum of points.

Output
Print the numbers of ways to get the second card in the required way if the first card is the queen of spades.

Examples
inputCopy
12
outputCopy
4
inputCopy
20
outputCopy
15
inputCopy
10
outputCopy
0
Note
In the first sample only four two's of different suits can earn the required sum of points.

In the second sample we can use all tens, jacks, queens and kings; overall it's 15 cards, as the queen of spades (as any other card) is only present once in the pack of cards and it's already in use.

In the third sample there is no card, that would add a zero to the current ten points.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n ;
	if(n>21 || n<10){
		cout << "0";
		return 0;
	}
	int diff = n-10 ; //that's the required  number we  want from the second card
	if(diff > 0 && diff != 10) cout << "4";
	else if(diff == 0) cout << "0" ; 
	else cout << "15";
}