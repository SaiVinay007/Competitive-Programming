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

ll n;
ll conv(ll x){
    n=0;
    while(x!=0){
        
        if(x%2==1){
            n+=1;
        }
        x/=2;
    }
    return n;
}

ll solve(ll c, ll na ,ll nb){
    ll x=0,y,num=0;
    while(x<=c){
        ll nx=0,ny;
        nx = conv(x);
        if(nx==na){
            y = c-x;
            ny = conv(y);
            if (ny==nb){
                num+=1;
            }
        }     
        x+=1;
    }
    return num;
}

int main()
{
    ll t;
    cin>>t;
    rep(i,0,t){
        ll a,b,c,na,nb,nc,num;
        cin>>a>>b>>c;
        na = conv(a);
        nb = conv(b);
        nc = conv(c);
        num = solve(c,na,nb);
        cout<<num<<endl;
    }



    return 0;
}
