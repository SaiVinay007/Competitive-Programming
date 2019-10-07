#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n,k;
    cin>>n>>k;

    ll max=0;
    vector<ll> v;
    ll a[n];

    set<ll> s;

    for(ll i=0; i<n;i++)
    {
        cin>>a[i];
        v.push_back(a[i]);
        s.insert(a[i]);
    }

    sort(v.begin(), v.end());
    ll num=1;

    for(ll i=1; i<n;i++)
    {
        if(v[i]==v[i-1])
        {
            num+=1;
        }
        else
        {
            if(num>max)
            {
                max = num;
            }
            num=1;
        }
    }


    if(max<=k)
    {
        cout<<"YES"<<"\n";
        ll res=1;
        ll ans[n] = {0};

        for(ll i=0;i<k;i++)
        {
            ll flg[k+1]  = {0};

            for(ll j=0;j<n;j++)
            {
                k=0;
                if(ans[j]==0)
                {

                    for (set<ll>::iterator it=s.begin(); it!=s.end(); ++it)
                    {

                        if(a[j]==*it && flg[k]==0)
                        {
                            ans[j] = res; 
                            flg[k] = 1;  
                            break; 
                        }
                        k+=1;
                    }
                }
            }

            res+=1;
        }

        for(ll i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }

    }
    else
    {
        cout<<"NO"<<"\n";
    }

	return 0;
}