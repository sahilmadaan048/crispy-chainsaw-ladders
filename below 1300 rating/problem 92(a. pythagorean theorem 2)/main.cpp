// https://codeforces.com/problemset/problem/304/A

#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <math.h>
#include <set>
using namespace std;
 
int main(){
  int n = 0;
  cin>>n;
  int res = 0;
  for(int i = 1; i < n; ++i){
    for(int j = i + 1; j < n; ++j){
      int k = (i*i) + (j*j);
      int d = sqrt(k);
      if(d * d == k && d <= n)res++;
    }
  }
  cout<<res<<endl;
  return 0;
}
