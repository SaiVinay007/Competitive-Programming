#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll t;
    cin>>t;

    while(t--)
    {
        ll n,p;
        cin>>n>>p;
        ll ans = 0;
        
        ll max = (n/2)+1;
        ll rem = n%(max);
        ll pos = p-rem;
        if(rem==0){
            ans = p*p*p;
        }        
        else
        {
            ans+= pos*pos;
            ans+= (p-n)*pos;
            ans+= (p-n)*(p-n);
        }
        cout <<ans<<endl;    
    }

    return 0;
}