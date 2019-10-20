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
 

int main()
{

    ll n, p, w, d;
    ll x, y, z;

    cin>>n>>p>>w>>d;

    x=0, y=0;
    ll a, b, dif;
    ll flg=0;

    if(p%w==0)
    {
        x = p/w,y=0, z=0;
        cout<<x<<" "<<y<<" "<<z;
        return 0;
    }
    else if(p%d==0)
    {
        x= 0,y = p/d,z=0;
        cout<<x<<" "<<y<<" "<<z;
        return 0;
    }
    else
    {
        ll rm, val;
        rm = p%w;
        ll rm2 = w%d;
        ll a = 0;
        while(true)
        {
            val = a*w + rm;
            y = val/d;

            if(val>p || y>n)
            {
                break;
            }
            if(val%d==0)
            {
                flg=1;
                break;
            }
        }

        a+=1;
        x = (p-val)/w;



    }
    

    
    // while(true)
    // {
    //     a = x*w;
    //     if(a>p)
    //     {
    //         flg=0;
    //         break;
    //     }
    //     b = p -a;
    //     y = b/d;

    //     if(b%d==0 && x+y<=n)
    //     {
    //         flg=1;
    //         break;
    //     }
    //     x+=1;
    // }

    if(flg)
    {   
        z = n-x-y;
        cout<<x<<" "<<y<<" "<<z;
    }
    else if(p==0)
    {
        x= 0; y=0; z= n;
        cout<<x<<" "<<y<<" "<<z;
    }
    else 
    {
        cout<<"-1";
    }
    
    
    return 0;
}