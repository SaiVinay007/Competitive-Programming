#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;



int main(){
    ll t;
    cin>>t;
    while(t--)
    {
        ll k,n;
        cin>>k>>n;
        ll ans=n;
        ans += 9*(k-1);
        cout<<ans<<"\n";
    }



	return 0;
}