#pragma GCC optimize ("-O3")
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



v64 fact(ll n, ll m, v64 result) {
    
    ll val = (n+m > 2*(m-1)) ? n+m : 2*(m-1);

   if (val >= 0) {
      result[0] = 1;
      for (ll i = 1; i <= val; ++i) {
         result[i] = i * result[i - 1]%NUM;
      }

      ll a, b, c, d;
      a = n+m-1;
      b=m-1;
      c=2*(m-1);
      d = n;
      v64 ans;
      ans.push_back(result[a]);
      ans.push_back(result[b]);
      ans.push_back(result[c]);
      ans.push_back(result[d]);

      return ans;
   }

}

ll pow(ll a, ll n)
{
    ll ans=1;
    forn(i,n)
    {
        ans*=a%NUM;
    }
}

void solve(ll n ,ll m)
{
    ll val = (n+m > 2*(m-1)) ? n+m+1 : 2*(m-1) +1;

    v64 result(val,0);
    
    v64 v;
    v = fact(n,m,result);

    ll ans;


    ans = (v[0]/(v[3]*v[1])%NUM)*pow((v[1]/((v[2]*v[2])%NUM)),n);

    cout<<ans;
    
    
}



int main()
{
    
    ll m, n;
    
    cin>>n>>m;

    solve(n,m);


    return 0;
}