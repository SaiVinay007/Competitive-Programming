#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

void bin(unsigned n) 
{ 
    if (n > 1) 
    bin(n>>1); 
      
    printf("%d", n & 1); 
} 

int main(){
    ll t;
    cin>>t;

    while(t--){
        ll n;

        cin>>n;

        vector< vector<ll> > v(n,vector<ll>(31,0)); 

        v.resize(n);
        for(ll i=0;i<n;i++)
        {
            ll num;
            cin>>num;
            ll j=0;
            while(num>0)
            {
                v[i][j] = num%2 ;
                // cout<<num%2<<endl;
                num /=2;
                j+=1;
            }
            reverse(v[i].begin(), v[i].end());
        }

        ll ans = 0;

        for(ll j=30;j>=0;j--)
        {
            ll n0=0,n1=0;
            for(ll i =0;i<n;i++)
            {
                if(v[i][j]==0)
                {
                    n0+=1;
                }
                else
                {
                    n1+=1;
                }
                // cout<<v[i][j];
                
            }
            // cout<<" "<< n0<<" "<<n1<<" ";

            if(n1>=n0)
            {
                ans+= pow(2,30-j);
                // cout<<ans;
            }
            // cout<<endl;
            
        }
        cout<<ans<<endl;


    }
    



	return 0;
}