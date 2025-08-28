
#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef vector<ll> vl;
#define speed cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
#define phi 1.618
/*  Abbrevations  */
#define ff first
#define ss second
#define mp make_pair
#define line cout<<endl;
#define pb push_back
#define Endl "\n"
// loops
#define forin(arr,n) for(ll i=0;i<n;i++) cin>>arr[i];
// Some print
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define cc ll test;cin>>test;while(test--)
// sort
#define all(V) (V).begin(),(V).end()
#define srt(V) sort(all(V))
#define srtGreat(V) sort(all(V),greater<ll>())
#define printv(v) for(ll i=0;i<ll(v.size());i++){cout<<v[i]<<" ";} line;
// some extra
#define sz(V) ll(V.size())


ll solve()
{
    char v[4][4];
    for(ll i=0;i<4;i++)
        for(ll j=0;j<4;j++)
            cin>>v[i][j];

    for(ll i=0;i<3;i++)
    {
        for(ll j=0;j<3;j++)
        {
            ll a=0,b=0;
            if(v[i][j]=='#')
                a++;
            else
                b++;
            if(v[i+1][j]=='#')
                a++;
            else
                b++;
            if(v[i][j+1]=='#')
                a++;
            else
                b++;
            if(v[i+1][j+1]=='#')
                a++;
            else
                b++;
            if(a>=3||b>=3)
            {
                yes
                return 0;
            }
        }
    }
    no
    return 0;
}

int main()
{
    speed;
    solve();

}

