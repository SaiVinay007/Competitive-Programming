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

int main()
{
    ll n,k;
    cin >>n>>k;
    ll val, ans=0;

    forn(i,n)
    {
        ll a;
        cin>>a;
        if(a==0)
        {
            break;
        }
        else if (i<=k-1)
        {
            ans+=1;
            if(i==k-1)
            {
                val = a;
            }
        }
        else 
        {
            if(val==a)
            {
                ans+=1;
            }
            else
            {
                break;
            }
            
        }
        
        
    }
    cout<<ans;

    return 0;
}