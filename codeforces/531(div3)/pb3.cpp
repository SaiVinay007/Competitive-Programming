#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n,x,y;
    cin>>n>>x>>y;
    ll arr[n];


    ll num=0;
    ll ans;
    for(ll i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        if(a<=x)
        {
            num+=1;
        }
    }

    if(x>y)
    {
        ans = n;
    }
    else
    {
        if(num%2==0)
        {
            ans = (num/2);
        }
        else
        {
            ans = (num/2)+1;
        }
    }

    cout<<ans;

	return 0;
}