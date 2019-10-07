#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll num = 0;
        for(ll i=0;i<100;i++)
        {
            ll a;
            cin>>a;
            if(a<31)
            {
                num+=1;
            }
        }
        if(num>59)
        {
            cout<<"yes";
        }
        else
        {
            cout<<"no";
        }
        cout<<"\n";
    }
    return 0;
}