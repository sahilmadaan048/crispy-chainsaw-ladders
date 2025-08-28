/*
A. Lights Out
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Lenny is playing a game on a 3 × 3 grid of lights. In the beginning of the game all lights are switched on. Pressing any of the lights will toggle it and all side-adjacent lights. The goal of the game is to switch all the lights off. We consider the toggling as follows: if the light was switched on then it will be switched off, if it was switched off then it will be switched on.

Lenny has spent some time playing with the grid and by now he has pressed each light a certain number of times. Given the number of times each light is pressed, you have to print the current state of each light.

Input
The input consists of three rows. Each row contains three integers each between 0 to 100 inclusive. The j-th number in the i-th row is the number of times the j-th light of the i-th row of the grid is pressed.

Output
Print three lines, each containing three characters. The j-th character of the i-th line is "1" if and only if the corresponding light is switched on, otherwise it's "0".

Examples
inputCopy
1 0 0
0 0 0
0 0 1
outputCopy
001
010
100
inputCopy
1 0 1
8 8 8
2 0 3
outputCopy
010
011
100

*/

#include<bits/stdc++.h>
using namespace std;

void toggle(int &num){
	num ^= 1;
	return ;
}

int main(){
	//declaring the original vector with all the lights on
	vector<vector<int>>  org(3, vector<int>(3,1));


	//taking inout of the 
	vector<vector<int> > input(3, vector<int>(3));;
	for(int i = 0 ;i<3 ; i++){
		for(int j = 0 ; j<3 ; j++){
			int x;
			cin >> x;
			x %= 2;
			input[i][j] = x;  //taking array input with resultant no of presses on the switch
		}
	}
	// for(int i = 0 ;i<3 ; i++){
	// 	for(int j = 0 ; j<3 ; j++){
	// 		// cin >> input[i][j];
	// 		cout << org[i][j] << " ";
	// 	}
	// 	cout  << endl;
	// }


	//now with each 1 on the input[i][j] element on the input matrix
	//the values in the org matrix are updated the element org[i][j]
	//since its side adjacent elements will be toggled (1->0 and 0->1)
	for(int i = 0 ; i< 3 ; i++){
		for(int j = 0; j< 3; j++){
			if(input[i][j] == 1 ){
				toggle(org[i][j]);
				if(i < 2) toggle(org[i+1][j]);
				if(j > 0) toggle(org[i][j-1]);
				if(j < 2) toggle(org[i][j+1]);
				if(i > 0) toggle(org[i-1][j]);
			}

		}
	}

	for(auto &row : org){
		for(auto &ele : row){
			cout << ele ;
		}
		cout << endl;
	}
}