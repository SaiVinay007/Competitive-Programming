#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n,m;
    cin>>n>>m;
    set<ll> s1,s2;
    ll arr[n] = {0};
    for(ll i=0;i<m;i++)
    {

        ll a;
        cin>>a;
        arr[a-1]+=1;
        ll flg=0;
        for(ll j=0;j<n;j++)
        {
            if(arr[j]==0)
            {
                flg=1;
                break;
            }
        }
        if(flg==0)
        {
            for(ll k=0;k<n;k++)
            {
                arr[k]-=1;
            }
            cout<<"1";
        }
        else
        {
            cout<<"0";
        }
        // if(s1.count(a))
        // {
            // s2.insert(a);
        // }
        // s.insert(a);
        // if(s.size()==n)
        // {
            // cout<<"1";
            // s.clear();
        // }
        // else
        // {
            // cout<<"0";
        // }
    }

   



	return 0;
}