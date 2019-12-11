#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;


int main()
{
    ll n,m;
    cin>>n;

    vector<ll> sb(n,0); 

    for(int i=0;i<n;i++)
    {
        cin>>sb[i];
    }

    cin>>m;

    vector<ll> sg(m,0); 

    for(int i=0;i<m;i++)
    {
        cin>>sg[i];
    }


    ll x=n-1,y=m-1;

    sort(sb.begin(), sb.end());
    sort(sg.begin(), sg.end());

    ll ans=0;

    while(x>=0 && y>=0)
    {
        if(abs(sb[x]-sg[y]) <= 1 )
        {
            ans+=1;
            x-=1;
            y-=1;
        }
        else
        {
            if(sb[x]>sg[y])
            {
                x-=1;
            }
            else
            {
                y-=1;
            } 
            
        }
        

        // cout<<x<<" "<<y<<endl;
        
    }
    cout<<ans;


    return 0;
}