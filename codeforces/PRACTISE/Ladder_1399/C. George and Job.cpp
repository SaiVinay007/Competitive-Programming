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
 

// bool sortinrev(const pair<ll,ll> &a,  
            //    const pair<ll,int> &b) 
// { 
    //    return (a.first > b.first); 
// } 

int main()
{
    
    // priority_queue <ll> pq;
    vector<pair<ll, pair<ll,ll>>> vals;

    ll n,m,k;
    cin>>n>>m>>k;

    v64 v(n,0);

    ll sum = 0;

    forn(i,n)
    {
        cin>>v[i];
    }

    forn(i,n-m+1)
    {
        sum=0;
        forn(j,m)
        {
            sum+=v[i+j];
        }
        vals.push_back(make_pair(sum,make_pair(i,i+m-1)));
    }
    
    ll ans=0;
    
    sort(vals.begin(), vals.end());
    ll tmp=0;
    ll st, ed, prev_st, prev_ed;


    rforn(i,vals.size()-1)
    {

        st = vals[i].second.first;
        ed = vals[i].second.second;

        if(i==vals.size()-1)
        {
            ans+=vals[i].first;
            tmp+=1;
        }
        else
        {
            if((st>=prev_st && st<=prev_ed) || (ed<=prev_ed && ed>= prev_st))
            {
                continue;
            }
            else
            {
                ans+=vals[i].first;
                tmp+=1;
            }
        }
        
        prev_st = st;
        prev_ed = ed; 
        
        if(tmp==k)
        {
            break;
        }
    }

    cout<<ans;

    
    return 0;
}