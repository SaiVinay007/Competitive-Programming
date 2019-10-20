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
    ll q, h, n;
    cin>>q;

    
    forn(i, q)
    {
        cin>>h>>n;

        v64 v(n+1,0);
        ll a;

        forn(j, n)
        {
            cin>>a;
            v[j]= a;
        }

        ll ans = 0;
        ll cur = h;

       
        forn(j, n-1)
        {
                // every time we fall before the next stand
                // if we have a stand next to the next then we are safe else we need to use crystals
                // we land on the last or the before last one any how we are going to do it
                // So we need to do it till n-1 th stand 

                if(v[j+1]-v[j+2]==1)
                {
                    j+=1;
                    // cur = v[j+1]-1;
                }
                else
                {
                    ans+=1;
                    // cur = v[j+2];
                }
  
            
            
        }

        


        cout<<ans<<ln;

    }


    return 0;
}



// forn(i, q)
    // {
    //     cin>>h>>n;
    //     v64 v(h+1,0);
    //     ll a;
    //     forn(j,n)
    //     {
    //         cin>>a;
    //         v[a]=1;
    //     }

    //     ll cur = h;

    //     ll ans=0;

    //     while(cur>2)
    //     {
    //         if(v[cur-1]==1)
    //         {
    //             if(v[cur-2]==0)
    //             {
    //                 ans+=1;
    //             }
    //             cur-=2;
    //         }
    //         else
    //         {
    //             cur-=1;
    //         }
    //     }
    //     cout <<ans<<ln;

    // }