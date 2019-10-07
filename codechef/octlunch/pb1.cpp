#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi; 
typedef pair<int,int> pi; 
typedef vector<ll> vll; 


#define F first;
#define S second;
#define PB push_back;
#define MP make_pair;
#define rep(i, a, b) for (int i=a; i<b; i++)

void solve(ll x,ll y, ll z){
    ll a,b,c;
    if(x+y==z || y+z==x || z+x == y)
{
    cout<<"yes";
}

else
{
    cout<<"no";
}

}

int main()
{
    ll t;
    cin>>t;
    rep(i,0,t){
        ll x,y,z;
        cin>>x>>y>>z;
        solve(x,y,z);
        cout<<endl;
    }

    return 0;
}



