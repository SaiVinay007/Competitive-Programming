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


bool compare(map<char, int> m1, map<char, int> m2, set<char> st)
{
    for (auto it=st.begin(); it != st.end(); ++it)
    { 
        if(m1[*it]!=m2[*it])
        {
            return false;
        }
    }
    return true;
}

map<char, int> create_map(string p)
{
    map<char, int> m1;
    forn(i,p.length())
    {
        if ( m1.find(p[i]) == m1.end() ) 
        {
            m1[p[i]]=1;
        } else 
        {
            m1[p[i]]+=1;
        }
    }
    return m1;
}

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        string p,h;
        cin>>p>>h;

        string s1,s2;

        ll l1,l2;
        l1 = p.length();
        l2 = h.length();

        map<char,int> m1,m2;

        string tp;
        set<char> st;

        forn(i,l1)
        {
            if ( m1.find(p[i]) == m1.end() ) 
            {
                m1[p[i]]=1;
            } else 
            {
                m1[p[i]]+=1;
            }

            st.insert(p[i]);
        }
        ll flg=0;
        forn(i,l2-l1+1)
        {
            tp = h.substr(i,l1);
            m2 = create_map(tp);
            if(compare(m1,m2,st))
            {
                cout<<"YES"<<'\n';
                flg=1;
                break;
            }
        }
        if(!flg)
        {
            cout<<"NO"<<'\n';
        }
        


    }

    
    return 0;
}