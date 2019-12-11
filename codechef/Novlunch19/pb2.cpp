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
        
        ll cnt=1, prev;
        
       
        forn(i,n)
        {
            cin>>v[i];
            if(n==1)
            {
                cout<<v[i];
                break;
            }
            if(i!=0)
            {
                if(v[i]==(prev+1))
                {
                    cnt+=1;
                    if(i==n-1)
                    {
                        if(cnt>2)
                        {
                            cout<<v[i-cnt+1]<<"..."<<v[i];
                            
                        }
                        else if(cnt==2)
                        {
                            cout<<v[i-1]<<","<<v[i];
                        }
                    }
                }
                else
                {
                    if(cnt>2)
                    {
                        cout<<v[i-cnt]<<"..."<<v[i-1];
                        
                    }
                    else if(cnt==2)
                    {
                        cout<<v[i-2]<<","<<v[i-1];
                    }
                    else if(cnt==1)
                    {
                        cout<<v[i-1];
                    }
                    if(i!=n-1)
                    {
                        cout<<",";
                    }
                    if(i==n-1)
                    {
                        cout<<","<<v[i];
                    }
                    
                    cnt=1;
                }
                
                
            }
            prev = v[i];
        }
        cout<<ln;
    }

    
    return 0;
}