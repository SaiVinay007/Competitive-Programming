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
 

ll solve(ll n, ll i, vp64 val)
{
    ll ans=0;
    // dbg(i);
    if(i==1)
    {
        ans=n;
    }
    else if(i>val.size())
    {   
        ans = 0;
    }
    else
    {
        ll mn=MOD, num=0;
        ll prev_mn;
        while(true)
        {
            ll num=0;
            forn(j,val.size())
            {   
                if(val[j].ss < mn && val[j].ss>0 )
                {
                    // dbg(val[j].ss);
                    mn = val[j].ss;
                    // dbg(mn);
                }                
                if(val[j].ss>0)
                {
                    num+=1;
                }
            }

            if(num<i)
            {
                break;
            }
            ans+=mn;

            ll it=0;
            ll cnt=0;
            while(true)
            {
                if(val[it].ss>=mn)
                {
                    val[it].ss-=mn;
                    cnt+=1;
                }
                it+=1;
                if(cnt>=i || it>=val.size())
                {
                    break;
                }
            }
        }
    }
    
    
    return ans;

}


int main()
{

    ll n;
    cin>>n;
    v64 v(n,0);
    vp64 val;

    forn(i,n)
    {
        cin>>v[i];
    }

    sort(v.begin(), v.end());

    ll a=1, num;
    num = v[0];
    
    forsn(i,1,n)
    {
        if(num==v[i])
        {
            a+=1;
            if(i==n-1)
            {
                val.pb(mp(num,a));
            }

        }
        else
        {
            val.pb(mp(num,a));
            num=v[i];
            a=1;
            if(i==n-1)
            {
                val.pb(mp(num,a));
            }
        }
    }

    ll ans;
    // dbg(val.size());

    forsn(i,1,n+1)
    {
        ans = solve(n, i, val);
        cout<<ans<<ln;
    }


    return 0;
}