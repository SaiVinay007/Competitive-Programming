#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	    
    ll n;
    cin>>n;

    vector<ll> v(n,0);

    for(ll i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        v[i] = a;
    }

    sort(v.begin(), v.end());
    ll sum =0;
    for(ll i=0 ; i<(n/2);i++)
    {

            sum += pow((v[i]+v[n-1-i]),2);
    }

    cout<<sum;

	return 0;
}