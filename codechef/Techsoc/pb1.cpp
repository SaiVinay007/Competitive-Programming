#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll t;
    cin>>t;

    while(t--){
        ll n,k;
        cin>>n>>k;

        ll sum = 0;

        for(ll i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            if(a%k==0)
            {
                sum += a/k;
            }
            else
            {
            sum += (a/k)+1;
                
            }
            
        }
        cout<<sum<<endl;

    }
    



	return 0;
}