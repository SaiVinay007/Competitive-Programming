#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n,m;
    cin>>n>>m;
    vector < pair<ll,ll> > v1,v2;

    for(ll i =0;i<n;i++)
    {
        ll a;
        cin>>a;
        v1.push_back(make_pair(a,i));
    }

    for(ll i =0;i<m;i++)
    {
        ll a;
        cin>>a;
        v2.push_back(make_pair(a,i));
    }

    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    ll flg = 0;
    vector<ll> val;
    map<ll, pair<ll,ll> > mp;
    set<ll> sums;
    ll tot = n+m-1;

    if(n>=m)
    {
        for(ll i=0;i<n;i++)
        {
            for(ll j=i;j<i+m && j<n;j++)
            {
                ll num;
                num = v1[j].first+v2[j-i].first;
                if(!sums.count(num))
                {
                    sums.insert(num);
                    mp[num] = make_pair(v1[j].second,v2[j-i].second);
                    flg+=1;
                }
                if(flg==tot)
                {
                    break;
                }
            }
            if(flg==tot)
            {
                break;
            }
        }
    }
    else
    {
        for(ll i=0;i<m;i++)
        {
            for(ll j=i;j<i+n && j<m;j++)
            {
                ll num;
                num = v1[j-i].first+v2[j].first;
                if(!sums.count(num))
                {
                    sums.insert(num);
                    mp[num] = make_pair(v1[j-i].second,v2[j].second);
                    flg+=1;
                }
                if(flg==tot)
                {
                    break;
                }
            }
            if(flg==tot)
            {
                break;
            }
        }
    }
    
    set<ll>::iterator it;
    for (it = sums.begin(); it!=sums.end();  ++it)
    {
        cout<< mp[*it].first <<" "<<mp[*it].second<<endl;
    }

    return 0;
}