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
 

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;
        v64 v(n,0);
        forn(i,n)
        {
            cin>>v[i];
        }
        sort(v.begin(), v.end());

        v64 c;

        set<ll> s;

        if(n==1)
        {
            cout<<1<<ln;
            continue;
        }

        forn(i,n)
        {
            if(i!=0 && i!=n-1)
            {
                if(v[i]>v[i-1]+1 && v[i]<v[i+1]-1)
                {
                    s.insert(v[i]);
                }
            }
            if(i==0)
            {
                if(v[1]>v[0]+1)
                {
                    s.insert(v[0]);
                }
            }
            if(i==n-1)
            {
                if(v[n-1]>v[n-2]+1)
                {
                    s.insert(v[n-1]);
                }
            }
        }

        for (auto itr = s.begin(); itr != s.end(); itr++) 
        { 
            c.pb(*itr);
        } 

        
        
        if(n!=1 && c.size()==1)
        {
            cout<<1<<ln;
            continue;

        }
        if(n!=0 && c.size()==0)
        {
            cout<<0<<ln;
            continue;
        }


        ll prev;
        ll dif;
        ll ans=0;
        ll yet=c.size();
        ll val=0;

        forn(i,c.size())
        {
            
            if(i!=val)
            {
                dif = c[i]-prev;
            
                if(dif==2)
                {
                    ans+=1;
                    yet-=2;
                    val = i+1;
                    prev = c[val];
                    continue;
                }
                else if(dif>2)
                {
                    ans+=1;
                    yet-=1;
                }
                else
                {
                    yet-=1;
                }
                
            }
            prev = c[i];
        }

        if(yet!=0)
        {
            ans+=1;
        }


        cout<<ans<<ln;
    }

    
    return 0;
}