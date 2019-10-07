#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    
    ll n,k;
    cin>>n>>k;

    ll arr[n];

    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];   
    }
    string s;
    cin>>s;
    ll sum =0;
    vector<ll> v;

    for(ll i=0;i<n;i++)
    {
        char a,b;
        a = s[i];
        v.push_back(arr[i]);   
        if(i==0)
        {
            i=0;
        }
        
        else if(a!=b)
        {
            v.pop_back();
            sort(v.begin(),v.end(),greater<ll>());
            for(ll j=0; j<v.size() && j<k;j++)
            {
                sum+=v[j];
                // cout<<v[j]<<endl;
            }
            v.clear();
            v.push_back(arr[i]);   
            if(i==n-1)
            {
                sum+=arr[i];
            }
        }
        else if(i==n-1 && v.size()!=0)
        {
            sort(v.begin(),v.end(),greater<ll>());
            for(ll j=0; j<v.size() && j<k;j++)
            {
                sum+=v[j];
                // cout<<v[j]<<endl;
            }
        }
        
        
        
        
        
        b = a;
    }

    cout<<sum;
    



	return 0;
}