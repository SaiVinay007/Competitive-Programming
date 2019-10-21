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
 

int main()
{

    ll n, m;

    cin>>n>>m;

    v64 pos(n+m, 0);
    v64 dri(n+m,0);

    forn(i,n+m)
    {
        cin>>pos[i];
    }
    forn(i,n+m)
    {
        cin>>dri[i];
    }
    v64 s(m,0);

    ll a, b;
    a = 0,b=0;

    forn(i,n+m)
    {
        if(dri[i]==0)
        {
            if(abs(pos[i]-pos[a]) <= abs(pos[i]-pos[b]))
            {
                s[a]+=1;
            }
            else
            {
                s[b]+=1;
            }
        }
        else
        {      

            a+=1;
            b+=1;
            if(b>=m)
            {
                b= m-1;
            }
        }
        
    }
    
    forn(i,m)
    {
        cout<<s[i]<<" ";
    }
    
    return 0;
}