// https://codeforces.com/problemset/problem/253/A

//yup bcos it is the same code
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n,m; cin>>n>>m;
// 	if(n == m){
// 		for(int i=0; i<n; i++){
// 			cout << "GB";
// 		}
// 	}
// 	else if(n>m){
// 		for(int i=0; i<m; i++) {
// 			cout << 'B';
// 			cout << 'G';
// 		}
// 		int num = n-m;
// 		for(int i=0; i<num; i++) cout << 'B';
// 	}
// 	else{
// 		for(int i=0; i<m; i++){
// 			cout << "GB";
// 		}
// 		int num = m-n;
// 		for(int i=0; i<num; i++) cout << 'G';
// 	}
// 	return 0;
// }


#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
 
int n,m;
 
int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	while (scanf("%d%d",&n,&m) != EOF)
	{
		if (n < m)
		{
			for (int i = 0;i < n;i++)
				printf("GB");
			for (int i = n;i < m;i++)
				printf("G");
		}
		else
		{
			for (int i = 0;i < m;i++)
				printf("BG");
			for (int i = m;i < n;i++)
				printf("B");
		}
		printf("\n");
	}
	return 0;
}