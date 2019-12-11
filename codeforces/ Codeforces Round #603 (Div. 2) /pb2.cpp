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
 
bool sortbysec(const pair<ll,ll> &a, 
              const pair<ll,ll> &b) 
{ 
    return (a.second < b.second); 
} 

void solve(vp64 v)
{
    sort(v.begin(), v.end());
    
    ll prev;
    ll ans=0;

    ll last;
    ll arr[10] = {0};
    ll cng[10] = {0};
    ll taken[10] = {0};
 
    forn(i,v.size())
    {
        last = v[i].first%10;

        if(i!=0)
        {
            if(prev==v[i].first)
            {
                arr[last]+=1;    
                cng[i]=1;
                ans+=1;
            }
        }
        taken[last] = 1; 
        prev = v[i].first;
    }

    forn(i,v.size())
    {
        if(i!=0 && cng[i]==1)
        {
            forn(j,10)
            {
                if( taken[j]==0)
                {
                    v[i].first/=10;
                    v[i].first*=10;
                    v[i].first+=j;
                    taken[j]=1;          
                    break;

                }
            }
            
        }
    }

    cout<<ans<<ln;
    sort(v.begin(), v.end(), sortbysec); 

    forn(i,v.size())
    {
        string st;
        st = to_string(v[i].first);
        ll num=0;
        num=4-st.length();
        while(num--)
        {
            cout<<0;
        }
        cout<<v[i].first<<ln;
    }

}



int main()
{
    
    ll t;
    cin>>t;

    forn(i,t)
    {
        ll n;
        cin>>n;

        vp64 v;
        
        forn(j,n)
        {
            ll a;
            cin>>a;
            v.pb(make_pair(a,j));
        }
        solve(v);
    }
    
    return 0;
}