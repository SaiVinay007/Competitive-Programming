#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n,m;
    cin>>n>>m;

    vector<ll> rem(n,0);
    vector<ll> cost(n,0);


    for(ll i=0;i<n;i++)
    {
        cin>>rem[i];
    }
    for(ll i=0;i<n;i++)
    {
        cin>>cost[i];
    }

    vector< pair<ll, pair<ll,ll > > > v;

    for(ll j=0;j<n;j++)
    {
        v.push_back(make_pair(cost[j],make_pair(rem[j],j)));
    }

    sort(v.begin(),v.end());

    for(ll i=0;i<m;i++)
    {
        ll mon = 0;
        ll ind,quan;

        cin>>ind>>quan;
        ind-=1;

        
        for(ll p=0;p<n;p++)
        {
            if( v[p].second.second == ind )
            {
                ind = p;  
                break;
            }
        }
        ll k = 0;

        while(quan)
        {
            if(v[ind].second.first>0)
            {
                mon+=v[ind].first;
                v[ind].second.first-=1;
                // cout<<v[ind].first<<" "<<ind<<" "<<endl;

                quan-=1;
            }
            else
            {
                if(v[k].second.first>0)
                {
                    mon+=v[k].first;     
                    // cout<<v[k].first<<" "<<k<<" "<<endl;
                    v[k].second.first-=1;
                    quan-=1;
                }
                else
                {
                    k+=1;
                }

            }

            if(k==n && quan!=0)
            {
                break;
            }
        }
        if(k==n)
        {
            cout<<"0"<<"\n";
        }
        else
        {
            // cout<<k<<" ";
            cout<<mon<<"\n";
        }

    }


	return 0;
}