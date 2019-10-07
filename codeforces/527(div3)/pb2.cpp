#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin>>n;
    vector<ll> vec;
    for(ll i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        vec.push_back(a);
    }
    sort(vec.begin(),vec.end());
    ll num=0;
    for(ll i=0;i<n;i+=2)
    {
        num+=vec[i+1]-vec[i];
    }
    cout<<num;


	return 0;
}
