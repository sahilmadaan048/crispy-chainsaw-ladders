/*
A. Magic Numbers
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
A magic number is a number formed by concatenation of numbers 1, 14 and 144. We can use each of these numbers any number of times. Therefore 14144, 141414 and 1411 are magic numbers but 1444, 514 and 414 are not.

You're given a number. Determine if it is a magic number or not.

Input
The first line of input contains an integer n, (1 ≤ n ≤ 109). This number doesn't contain leading zeros.

Output
Print "YES" if n is a magic number or print "NO" if it's not.

Examples
inputCopy
114114
outputCopy
YES
inputCopy
1111
outputCopy
YES
inputCopy
441231
outputCopy
NO

*/

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	long long  n;
// 	cin >> n ;	

// 	bool flag = true;
// 	int count_1 = 0 ;
// 	int count_4 = 0 ;

// 	while(n){
// 		int ld = n%10 ;

// 		if((ld != 1) && (ld!=4)){
// 			flag = false ;
// 			break;
// 		}
// 		else if(ld == 1) count_1 ++;
// 		else if(ld == 4) count_4++;
// 		n/=10;
// 	}




// 	//also false if the firat digit of the given number is 4 then it is false


// 	if(!flag){
// 		cout << "NO" << endl;
// 		return 0 ;
// 	}
// 	else cout << "YES" << endl;
// }


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