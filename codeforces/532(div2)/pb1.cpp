#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n,k;
    cin>>n>>k;

    ll n1,n2;
    ll arr[n];
    ll tot=0;
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        tot+=arr[i];
    }
    ll val[k] = {0};
    for(ll i=0;i<k;i++)
    {
        for(ll j=i;j<n;j+=k)
        {
            val[i]+=arr[j];
        }
        val[i] = tot - val[i];
    }

    
    sort(val,val+k);
    ll mx,mn;
    mx = abs(val[0]);
    mn = abs(val[k-1]);
    
    cout<<max(mn,mx);


	return 0;
}