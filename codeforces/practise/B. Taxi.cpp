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
    ll n;
    cin>>n;
    ll n1=0,n2=0,n3=0,n4=0;
    ll ans=0;
    forn(i,n)
    {
        ll a;
        cin>>a;
        if(a==1)
        {
            n1+=1;
        }
        else if (a==2)
        {
            n2+=1;
        }
        else if (a==3)
        {
            n3+=1;
        }
        else if (a==4)
        {
            n4+=1;
        }
        
    }
    ans+=n4;
    ans+=n2/2;
    ans+=min(n1,n3);
    if(n2%2!=0)
    {
            ans+=1;
    }
    if(n1>n3)
    {
        n1-=n3;
        if(n2%2!=0)
        {
            n1-=2;
        }

        ans+=ceil(n1/4.0);
    }
    else if(n3>n1)
    {
        n3-=n1;
        ans+=n3;
    }
    

    cout<<ans;

    return 0;
}