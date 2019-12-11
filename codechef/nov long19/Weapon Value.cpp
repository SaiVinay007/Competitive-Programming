#pragma GCC optimize ("-O3")
#include<bits/stdc++.h>
#include <stdint.h>
#include<string>
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
 

ll get_num(string str)
{
    ll ans=0;
    forn(i,str.length())
    {
        ans+= str[i] - '0';
    }
    return ans;
}

string get_str(string s1, string s2)
{
    string ans = "";
    forn(i,10)
    {
        if(s1[i]==s2[i])
        {
            ans+='0';
        }
        else
        {
            ans+='1';
        }
        
    }
    return ans;
}

int main()
{
    ll t;
    cin>>t;

    ll n;

    while(t--)
    {
        cin>>n;
        vector<string> st(n," ");
        string prev;
        forn(i,n)
        {
            cin>>st[i];
            if(i!=0)
            {
                prev=get_str(st[i], prev);
            }
            else
            {
                prev=st[i];            
            }
            
        }
        cout<<get_num(prev)<<ln;
    }

    
    return 0;
}