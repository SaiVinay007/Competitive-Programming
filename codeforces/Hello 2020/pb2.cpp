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
    ll n;
    cin>>n;

    v64 assent(n,0);
    v64 des_st(n);
    v64 des_ed(n);

    ll num_ass=0;
    forn(i,n)
    {
        ll le;
        cin>>le;
        ll a, prev, flg=0;

        v64 v(le);
        forn(j,le)
        {
            cin>>v[j];
            if(j!=0)
            {
                if(v[j]>prev && flg==0)
                {
                    assent[i]=1;
                    num_ass+=1;
                    flg=1;
                }
            }
            prev = v[j];
        }

        if(flg==0)
        {
            des_ed[i] = v[le-1];
            des_st[i] = v[0];
        }
    }
    v64 sort_ed, sort_st;

    sort_ed = des_ed;
    sort_st = des_st;

    sort(sort_ed.begin(), sort_ed.end());
    sort(sort_st.begin(), sort_st.end());
    

    ll ans=0;
    forn(i,n)
    {

        if(assent[i]==1)
        {
            ans+= n;
        }
        else
        {
            ans+=num_ass;
            ll cnt;

            auto upper = upper_bound(sort_st.begin(), sort_st.end(), des_ed[i]);
            cnt = sort_st.size() -(upper- sort_st.begin());

            ans+= cnt;

        }
        
    }


    cout<<ans;
    
    return 0;
}