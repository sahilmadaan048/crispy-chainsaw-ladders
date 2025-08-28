// https://codeforces.com/problemset/problem/459/A

#include<bits/stdc++.h>
#define INT double
// #define IMX INT_MAX
// #define IMM INT_MIN

using namespace std;

INT checkSlope(INT x1, INT y1 , INT x2, INT y2){
	if(x2 == x1) return -234;
	return (y2-y1)/(x2-x1);
}

int main(){
	INT x1, x2, y1, y2;
	cin >> x1 >> y1 >> x2 >> y2 ;

	if(checkSlope( x1, y1 , x2 , y2) == -234){ //means they are a axis parallel to y axis
		if(y2>y1){
			cout << (x1+y2-y1) << " " << y1 << " " << (x2 +y2-y1) << " " << y2 << endl;
			return 0 ;
		}
		else{
			cout << (x1+y1-y2) << " " << y1 << " " << (x2 +y1-y2) << " " << y2 << endl;
			return 0 ;
		}
	}
	else if(checkSlope( x1, y1 , x2 , y2) == 0){ //means they are on x axis
		if(x2 > x1){
			cout <<  x1 << " " << (y1+x2-x1) << " " << x2 << " " << (y2 + x2-x1) << endl;
			return 0;
		}
		else{
			cout <<  x1 << " " << (y1+x1-x2) << " " << x2 << " " << (y2 + x1-x2) << endl;
			return 0;
		} 
	}
	else if(abs(checkSlope( x1, y1 , x2 , y2)) == 1){
		if(x2 > x1 ){
			cout << x1 << " "<< (y2) << " " << (x2) << " " << y1 <<  endl;
			return 0;
		}
		// else if(x2>x1 && y2<y1){
		// 	cout << x1 << " " << (y2) << " " << x2 << " " << y1 << endl;
		// 	return 0;
		// }
		else {
			cout << x2 << " " << y1  << " " <<  x1 << " " << y2 << endl;
			return 0 ;
		}
	}
	else{
		cout << -1 << endl;
		return  0;
	}

	return  0 ;

}