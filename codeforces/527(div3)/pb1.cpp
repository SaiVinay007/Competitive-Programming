#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin >>a>>b;
        ll n1,n2;
        n1 = a/b;
        n2 = a%b;
        char c;
        while(n1--)
        {
            for(c='a';c<= 'a'+b-1;c++)
            {
                cout<<c;
            }
        }
        for(c='a';c<= 'a'+n2-1;c++)
        {
            cout<<c;
        }
        cout<<"\n";
    }



	return 0;
}
