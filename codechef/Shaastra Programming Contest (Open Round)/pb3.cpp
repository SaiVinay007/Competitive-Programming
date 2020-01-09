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


ll lllog(ll base, ll x) {
    return (ll)(log(x) / log(base));
}


ll recur(ll dif, v64 val, ll pos, ll n, ll an)
{

    if(dif<0)
    {
        return 0;
    }

    if(dif==0)
    {
        return an;
    }

    if(pos>n)
    {
        return an;
    }

    return recur(dif-val[pos], val, pos+1, n, an+1) + recur(dif, val, pos+1, n, an);
}



// Uses Dynamic Programming to find distinct 
// subset sums 
ll printDistSum(v64 arr, ll n, ll dif) 
{ 
    ll sum = 0; 
    for (ll i=0; i<n; i++) 
        {
            sum += arr[i]; 
        }
    // dp[i][j] would be true if arr[0..i-1] has 
    // a subset with sum equal to j.
    dbg(sum); 
    bool dp[n+1][sum+1]; 
    // memset(dp, 0, sizeof(dp)); 
    cout<<"fin";
    // There is always a subset with 0 sum 
    for (ll i=0; i<=n; i++) 
        {
            dp[i][0] = true; 
        }
    // Fill dp[][] in bottom up manner 
    for (ll i=1; i<=n; i++) 
    { 
        dp[i][arr[i-1]] = true; 
        for (ll j=1; j<=sum; j++) 
        { 
            // Sums that were achievable 
            // without current array element 
            if (dp[i-1][j] == true) 
            { 
                dp[i][j] = true; 
                dp[i][j + arr[i-1]] = true; 
            } 
        } 
    } 

    ll ans=0;
  
    // Print last row elements 
    for (ll j=0; j<=sum; j++)
    {
        if (dp[n][j]==true) 
        {
            if(j!=0)
            {
                if(j<=dif)
                {
                    ans+=1;
                }
            }
        }
    } 

    return ans;
} 

void solve(ll n)
{
    ll ans=0;

    ll num = lllog(3, n);

    

    ll tot= num+1;
    v64 val(tot);
    ll k=1;
    ll sum=0;

    // dbg(tot);
    forn(i,tot)
    {
        val[i] = k;
        k*=3;
        sum+=val[i]; 
    }

    ans = printDistSum(val, tot, n);
    cout<<ans<<ln;
    // if(sum<=n)
    // {
    //     ans = pow(2, tot)-1;
    //     cout<<ans<<ln;
    //     return;
    // }
    // else
    // {
    //     ll dif = n - val[tot-1];

    //     // dbg(dif);

    //     ans+=pow(2, tot-1)-1;
    //     ans+=1;

    //     // ans+=recur(dif, val, 0, tot-2, 0);
    //     // dbg(recur(dif, val, 0, tot-2, 0));
    //     cout<<ans<<ln;
    //     return;
    // }

}


int main()
{
    
    ll t; cin>>t;

    while (t--)
    {
        ll n; cin>>n;

        solve(n);

    }
    


    
    return 0;
}