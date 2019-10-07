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
ll NUM = 1000000007;
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

void solve(string s, string t)
{
    ll k= s.length();
    ll flg=0;

    forn(i,k)
    {
        if(s[i]!=t[i])
        {
            if(k==1)
            {
                flg=1;
                break;
            }
            if(i==0)
            {
                if(s[i+1]==t[i])
                {
                    s[i]=s[i+1];
                } 
                else if(t[i+1]==s[i])
                {
                    t[i]=t[i+1];
                } 
                else
                {
                    flg=1;
                    break;
                }
                       
            }
            else if(i==k-1)
            {
                if(s[i-1]==t[i])
                {
                    s[i]=s[i-1];
                }
                else if(t[i-1]==s[i])
                {
                    t[i]=t[i-1];
                }
                else
                {
                    flg=1;
                    break;
                }
            }
            else
            {
                if(s[i-1]==t[i] || s[i+1]==t[i])
                {
                    s[i]=t[i];
                }
                else if(t[i-1]==s[i] || t[i+1]==s[i])
                {
                    t[i]=s[i];
                }
                else
                {
                    flg=1;
                    break;
                }
                
            }
        }    
    }

    if(flg)
    {
        cout<<"NO"<<ln;
    }
    else
    {
        cout<<"YES"<<ln;
        
    }
    return;

}

int main()
{
    ll q;
    cin>>q; 

    string s,t;
    forn(i,q)
    {
        cin>>s>>t;
        solve(s,t);
    }
		    



	return 0;
}



