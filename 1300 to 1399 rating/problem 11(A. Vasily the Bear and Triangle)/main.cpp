// https://codeforces.com/problemset/problem/336/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int  a, b;
    cin >> a >> b;

    if(a>0 && b>0){  //1st qudrant point
    	cout << "0 " << (a+b) << " " << (a+b) << " 0" << endl;
    }
    else if(a<0 && b>0){  //2nd quadtrant point
    	cout << -(abs(a) + abs(b)) << " 0 0 " << (abs(a) + abs(b)) << endl;
 	}
 	else if(a<0 && b<0){  //3rd qudrant point
 		cout<< -(abs(a) + abs(b)) << " 0 0 " <<  -(abs(a) + abs(b))  << endl;
 	}
 	else{  //4th qudrant point
 		cout << "0 " << -(abs(a) + abs(b))  << " " <<  (abs(a) + abs(b)) << " 0" << endl; 
 	}
    return 0;
}

 