#include<bits/stdc++.h>
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
ll NUM = 1000000007;
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


ll solve(ll n)
{
    // ll ans;
    if(n<4)
    {
        return 4-n;
    }

    if(n%2==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }

    // return ans;
}


int main()
{
    ll q,n;
    cin>>q;
    ll ans;
    forn(i,q)
    {
        cin>>n;
        ans = solve(n);
        cout <<ans<<ln;
    }
    // dbg(i);

	return 0;
}
