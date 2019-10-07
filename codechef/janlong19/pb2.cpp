#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,a,b;
        cin>>n>>a>>b;
        ll arr[n];
        ll com=0, onla=0, onlb=0;
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]%a==0 && arr[i]%b==0)
            {
                com+=1;
            }
            else if(arr[i]%a==0)
            {
                onla+=1;
            }
            else if(arr[i]%b==0)
            {
                onlb+=1;
            }
        }

        if(onla>onlb)
        {
            cout<<"BOB"<<"\n";
        }
        else if(onla==onlb)
        {
            if(com==0)
            {
                cout<<"ALICE"<<"\n";
            }
            else
            {
                cout<<"BOB"<<"\n";            
            }
        }
        else
        {
            cout<<"ALICE"<<"\n";
        }
        
    }
    return 0;
}