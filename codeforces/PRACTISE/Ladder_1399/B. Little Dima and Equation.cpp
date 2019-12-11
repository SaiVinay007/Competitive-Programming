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
 
ll pow(ll a,ll b)
{
    if(b==1)
    {
        return a;
    }
    else if(b==0)
    {
        return 1;
    }
    else if(b%2==0)
    {
        return pow(a,b/2)*pow(a,b/2);
    }
    else
    {
        return a*pow(a,b/2)*pow(a,b/2);
    }
    
}

ll sum(ll x)
{
    ll ans = 0;
    while(x)
    {
        ans+=x%10;
        x/=10;
    }
    return ans;
}

int main()
{
    
    ll a,b,c;
    ll x;


    cin>>a>>b>>c;
    v64 v;
    ll num=0;
    forsn(i,1,82)
    {
        x = b*pow(i,a)+c;

        if(sum(x)==i && x<1000000000)
        {
            // break;
            v.push_back(x);
            num+=1;
        }
    }

    cout<<num<<ln;
    if(num>0)
    {
        forn(i,v.size())
        {
            cout<<v[i]<<" ";
        }

    }

    
    return 0;
}