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

typedef map<int,int> mii;
typedef map<int,v32> mvi;
typedef map<int, p32> mpi;
ll MOD = 998244353;
ll NUM = 1e9+7;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define Acc(i,n,a) for(int i=0;i<(int)n;i++) cin>>a[i]
#define Acc2(i,n,a,b) for(int i=0;i<(int)n;i++) cin>>a[i]>>b[i]
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

ll MPOW( ll a, ll b, ll m) { if(b==0) return 1; ll x=MPOW(a,b/2,m); x=(x*x)%m; if(b%2==1) x=(x*a)%m; return x;}
ll MINV( ll a, ll m) { return MPOW(a,m-2,m);}
ll MFACT( ll n, ll m){ if(m<=n) return 0; else if(n==0) return 1; else return ((MFACT(n-1,m)*n)%m);}
inline ll max( ll a, ll b) { return (a>b)?a:b;}
inline ll min( ll a, ll b){ return (a<b)?a:b;}
inline void swap( ll &a, ll &b){ ll temp=a; a=b; b=temp; return;}
inline ll max3( ll a, ll b, ll c){ return max(a,max(b,c));}
inline ll min3( ll a, ll b, ll c){ return min(a,min(b,c));}

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;

        vector<string> v;

        forn(i,n)
        {
            cin>>v[i];
        }
        ll c1=0,c2=0,c3=0,c4=0;
        forn(i,n)
        {
            ll sz = v[i].length();
            if(v[i]=="0")
            {
                c1+=1;
            }
            else if(v[i]=="1")
            {
                c2+=1;
            }
            else if(v[i][0]==v[i][sz-1])
            {
                if(v[i][0]=='0')
                {
                    c1+=1;
                }
                else
                {
                    c2+=1;
                }
                
            }
            else if(v[i][0]=='0' && v[i][sz-1]=='1')
            {
                c3+=1;
            }
            else
            {
                c4+=1;
            }

        }

        ll end0 = c4+c1;
        ll end1 = c3=c2;
        ll st0 = c1+c3;
        ll st1 = c2+c4; 
    
        ll numleft=n;

        if(c1>c2)
        {
            numleft-=2*c2+1;
            c2=0;
            c1-=c2+1;
            c1+=1;
        }
        else if(c2>c1)
        {
            numleft-=2*c1+1;
            c1=0;
            c2-=c1+1;
            c2+=1;
        }
        else
        {
            numleft-=2*c1;
            c1=0;
            c2=0;

            if(c3>c4)
            {
                c3+=1;
            }
            else
            {
                c4+=1;
            }
        }
        

        if(c1>0)
        {
            numleft -= min(c1,c3);
            c1-= min(c1,c3);
            c3-= min(c1,c3);
            if(c1>0 && c4>0)
            {
                numleft-=min(c1,c4);
                c1-= min(c1,c4);
                c4-= min(c1,c4);
            }
        }
        if(c2>0)
        {
            numleft-=min(c2,c4);
            c2-= min(c2,c4);
            c4-= min(c2,c4);
            if(c2>0 && c3>0)
            {
                numleft-=min(c1,c4);
                c1-= min(c1,c3);
                c3-= min(c1,c3);
            }
        }
    
        if(c1)
    }

    
    return 0;
}