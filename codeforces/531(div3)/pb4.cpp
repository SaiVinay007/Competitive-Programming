#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    string s;
    cin>>n>>s;

    ll num0=0,num1=0,num2=0;
    vector<ll> v0,v1,v2;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            num0+=1;
            v0.push_back(i);
        }
        else if(s[i]=='1')
        {
            num1+=1;
            v1.push_back(i);

        }
        else if(s[i]=='2')
        {
            num2+=1;
            v2.push_back(i);
        
        }
    }

    ll num = n/3;
    ll a,b,c;
    a = n-num0;
    b = n-num1;
    c = n-num2;

    if(a>=0)
    {
        ll k=v0.size();
        for(ll i=k-1;i>(-1*a);i--)
        {
            s[v0[i]] = '1';
        }
    }
    else
    {
        ll k = 0;
        for(ll i=k;i<a;i--)
        {
            s[v1[i]] = '0';
        }
    }

    


	return 0;
}