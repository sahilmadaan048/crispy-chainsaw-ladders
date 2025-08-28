// https://codeforces.com/problemset/problem/365/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define f first
#define s second
#define si(x)   scanf("%d",&x)
#define sl(x)   scanf("%I64d",&x)
#define CLR(x)  memset(x,0,sizeof(x))
#define RESET(x) memset(x,-1,sizeof(x))
#define pi pair<int,int>
#define pb push_back
#define mp make_pair

const int sz=112345;
ll a[sz];

int main()
{
    int n,m,i,j;
    si(n);
    for(i=0;i<n;i++)
    {
        sl(a[i]);
    }
    if(n<3)
    {
        cout << n << "\n";
        return 0;
    }
    int cnt=2,ans=2;
    for(i=2;i<n;i++)
    {
        if(a[i]==a[i-1]+a[i-2])
        {
            cnt++;
        }
        else
        {
            ans=max(ans,cnt);
            cnt=2;
        }
    }
    ans=max(ans,cnt);
    cout << ans << "\n";
}
