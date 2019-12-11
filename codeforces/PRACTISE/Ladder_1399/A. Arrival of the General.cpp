#pragma GCC optimize ("-O3")
#include <stdint.h>
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
 

int main()
{
    int n;
    cin>>n;
    int a[n];
    forn(i,n)
    {
        cin>>a[i];
    }

    int mx = INT16_MIN;
    int mn = INT16_MAX;
    int indmx, indmn;

    forn(i,n)
    {
        if(a[i]>mx)
        {
            mx = a[i];
            indmx = i;
        }
        if(a[i]<=mn)
        {
            mn = a[i];
            indmn = i;
        }
    }

    int ans=0;
    if(indmx<indmn)
    {
        ans+=indmx;
        ans+=n-1-indmn;
    }
    else if(indmx==indmn)
    {
        ans = 0;
    }
    else
    {
        ans+=indmx;
        ans+= n-2-indmn;
    }
    
    
    cout<<ans;


    
    return 0;
}