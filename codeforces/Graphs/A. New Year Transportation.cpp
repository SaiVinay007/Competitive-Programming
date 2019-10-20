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

 /*
In this problem we are given a directed graph, and asked whether a particular vertex is reachable from vertex 1. 
It is possible to solve this by running a depth-first search starting from vertex 1.
Since every vertex has at most one outgoing edge, it is possible to write the DFS as a simple loop. 
Some people used this to make very short submissions.
*/

int main()
{
    ll n,t;
    cin>>n>>t;
    ll val=1;
    ll flg=0;
    v64 a(n-1,0);
    forn(i,n-1)
    {
        cin>>a[i];
    }
    while(val<t)
    {
        val+=a[val-1];
    }

    // string x = (val==t) ? "Yes" : "NO";
    // cout<<x;
    puts(val == t ? "YES" : "NO");

    return 0;
}