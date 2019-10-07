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

        if(n==3)
        {
            cout<<"First";
        }
        else if((n-2)%2==0)
        {
            cout<<"First";
        }
        else
        {
            cout<<"Second";
        }
        cout<<"\n";
    }
    
    return 0;
}
