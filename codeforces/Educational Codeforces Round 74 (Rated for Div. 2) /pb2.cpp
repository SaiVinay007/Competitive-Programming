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

// void solve(ll n, ll r, set<int> s)
// {
//     ll ans = 0;
//     set<int>::reverse_iterator it;
//     for (it = s.rbegin(); it != s.rend(); it++) 
//     {
//         ans+=1;

//         s.erase(s.end());
//         s.insert(*(it+1)-r);
//         s.erase(s.end());

//         if(*(it++)-r <= 0)
//         {
//             break;
//         }
//     }
    
//     cout<<ans<<ln;

// }

int main()
{   
    ll q, n, r;
    cin>>q;
    forn(i,q)
    {
        cin>>n>>r;
        v64 v(n,0);
        // set<int> s;
        forn(j,n)
        {
            cin>>v[j];
            // s.insert(v[j]);
        }

        // solve(n,r,s);
        sort(v.begin(), v.end());
        ll ans = 0;
        rforn(j,n-1)
        {
           if(v[j]==v[j-1])
            {
                continue;
            }
            else if(v[j-1]-r*(ans+1)<=0)
            {
                ans+=1;
                break;
            }
            else
            {
                ans+=1;
            }
        }

        cout<<ans<<ln;
    }
    
    return 0;
}
//  if(v[j]-r*ans<=0)
//             {
//                 break;
//             }
//             else 