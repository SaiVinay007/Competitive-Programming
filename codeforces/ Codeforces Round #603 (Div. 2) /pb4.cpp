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


bool check(string s1, string s2) 
{ 
    
    map<char, int> map; 
  
    for (int i = 0; i < s1.length(); i++) 
        map[s1[i]]++; 

    for (int i = 0; i < s2.length(); i++) 
        if (map[s2[i]] > 0) 
            return true; 
  
    return false; 
} 
 
void solve(vector<string> v)
{
    
    ll it = 0;

    while(true)
    {
        string s = v[it];
        if(v[it]==" ")
        {
            continue;
        }

        if(it==v.size()-1)
        {
            break;
        }

        ll it1 = it+1;
        
        while(true)
        {
            if(check(v[it],v[it1]))
            {
                v[it1] = " ";
            }
            if(it1==v.size()-1)
            {
                break;
            }
            it1++;
        }
        
        it++;
    }
    ll ans=0;
    forn(i,v.size()-1)
    {
        if(v[i]!=" ")
        {
            ans+=1;
        }
    }

    cout<<ans;

}




int main()
{
    ll n;
    cin>>n;
    vector<string> v;
    string s;
    forn(i,n)
    {
        cin>>s;
        v.pb(s);
    }
    solve(v);

    
    return 0;
}