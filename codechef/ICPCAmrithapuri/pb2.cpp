#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll num1=1000000,num2=1000000;
        ll flg = 0,flg1 = 0;
        set<ll> s;
        ll b,c=1000000;
        
        for(ll i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            s.insert(a);
            if(i==0)
            {
                b = a;
                num1 = 0;
            }
            if(a!=b && flg==0)
            {
                c = a;
                flg=1;
                num2 = 0;
            }
            if(a==b)
            {
                num1+=1;
            }
            if(a==c)
            {
                num2+=1;
            }
            if(s.size()>2)
            {
                cout<<"-1";
                flg1 = 1;
                break;
            }
            
        }

        if((b==n-1) && (s.size()==1)&& flg1==0)
        {
            cout<<"0";
        }
        else if((b==0) && (s.size()==1)&& flg1==0)
        {
            cout<<n;
        }
        else if((max(c,b)-min(c,b)>1) && flg1==0)
        {
            cout<<"-1";
        }
        else if((c > b) && (num1 = c) && flg1==0)
        {
            cout<<(n-c);
        }
        else if((b>c) && (num2 = b)&& flg1==0)
        {
            cout<<(n-b);
        }
        else if(flg1==0)
        {
            cout<<"-1";
        }

        cout<<"\n";
        
    }

    return 0;
}