#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll mod = 1000000007;

ll m,n;

ll solve(ll nm, ll nn, ll i)
{
    ll arr[m+n];

    for(ll i=0;i<n+m;i++)
    {
        if(i==0)
        {
            arr[i] = 1;
            nm+=1;
        }

        if(nm>(nn+1))
        {
            arr[i] = 2;
        }
        else
        {
            arr[i] = 1;
        }
        
    }

    if (i == (m+n))
    {
        return 1;
    }
    else if(nm>(nn+1))
    {
        if(nm+1<=m && nn+1<=n)
        {
            return (solve(nm+1,nn,i+1 )%mod + solve(nm, nn+1,i+1 )%mod)%mod;
        }
        else if(nm+1<=m)
        {
            return solve(nm+1,nn,i+1 )%mod;
        }
        else if (nn+1<=n)
        {
            return solve(nm, nn+1,i+1 )%mod;
        }
        
    }
    else
    {
        return solve(nm+1,nn,i+1)&mod;
    }
    
}


int main(){
    ll t;
    cin>>t;

    while(t--){
        cin>>m>>n;

        ll ans;
        ans = solve(0,0,1);
        cout<<ans<<endl;
    }
    



	return 0;
}