#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;

        ll bal=0;
        ll flg = 0;
        for(ll i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            if(a==500)
            {
                bal+=500;
            }
            if(a==1000)
            {
                if(bal==0 && flg==0)
                {
                    cout<<"NO";
                    flg = 1;
                }
                else
                {
                    bal-=500;
                }
                
            }

        }
        if(flg==0)
        {
            cout<<"YES";
        }
        cout<<"\n";

    }
    



	return 0;
}