#pragma GCC optimize ("-O3")
#include<bits/stdc++.h>
#include <stdint.h>
using namespace std;
 
typedef long long int ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
ll NUM = 1e9+7;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define INF 1e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define zer ll(0)
 

int main()
{
    
    ll n;
    cin>>n;

    forn(i,n)
    {
        v64 v(3,0);
        cin>>v[0]>>v[1]>>v[2];

        sort(v.begin(), v.end());

        ll ans=0;

        ll dif = v[2]-v[1];

        if(v[0]>dif)
        {
            ans+=dif;
            v[0]-=dif;
            v[2]-=dif;
            ans+=v[0];
            v[2]-=((v[0]+1)/2);
            ans+=v[2];
        }        
        else
        {
            v[2]-=v[0];
            ans+=v[0];
            ans+= min(v[2],v[1]);
        }
        
        

        cout<<ans<<ln;
    }
    
    return 0;
}