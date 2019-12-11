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


ll gcd(ll a, ll b){ 
    if (a == 0) 
        return b;  
    return gcd(b % a, a);  
} 
  
   
ll lcm(ll a, ll b)  
{  
   return (a*b)/gcd(a, b);  
}  


void solve(ll r, ll b, ll k)
{
    ll val = __gcd(r, b);
    
    b/=val;
    r/=val;

    if(r > b)
    {
		swap(r, b);
    }
	if((k - 1) * r + 1 < b)
    {
		cout << "REBEL";
    }
	else
    {
		cout << "OBEY";
    }
	cout << endl;

}




int main()
{
    ll n;
    cin>>n;

    forn(i,n)
    {
        ll r, b, k;
        cin>>r>>b>>k;
        solve(r,b,k);
    }

    
    return 0;
}