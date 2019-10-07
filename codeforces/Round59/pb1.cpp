#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        if(n==2)
        {
            if(s[1]>s[0])
            {
                cout<<"YES"<<"\n";
                cout<<"2"<<"\n";
                cout<<s[0]<<" "<<s[1]<<"\n";
            }
            else
            {
                cout<<"NO"<<"\n";
            }
        }
        else
        {
            cout<<"YES"<<"\n";
            cout<<"2"<<"\n";
            string s1,s2;
            s1 = s.substr(0,1);
            s2 = s.substr(1,n);
            cout<<s1 <<" "<<s2<<"\n";
        }        
    }

	return 0;
}