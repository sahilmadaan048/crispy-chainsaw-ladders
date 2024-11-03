// https://codeforces.com/problemset/problem/347/B

#include<cstdio>
#include<iostream>
#include<cstring>
#include<cstdlib>
#include<algorithm>
#include<cmath>
#include<map>
#include<set>
#include<stack>
#include<queue>
#include<vector>

using namespace std;
int main()
{
	int n,ans=0,a[110000];
	cin>>n;
    for (int i=0;i<n;i++)
    {
		cin>>a[i];
		if (i==a[i]) ans++;
	}
	int flag=0;
	for (int i=0;i<n;i++)
	{
		if (i!=a[i]&&a[a[i]]==i)
		{
			flag=1;
			break;
		}
	}
	if (ans!=n) 
	{
		if (flag) ans+=2;
		      else ans+=1;
	}
    
	cout<<ans<<endl;
	return 0;
}
