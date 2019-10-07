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

void solve(ll n){

    ll n9,v,nv;
    n9 = n/9;
    v = n%9;
    if (v==0){
        nv=0;
    }
    else
    {
        nv =1;
    }
    
    rep(i,0,n+n9+nv){
        if(i==0 && v!=0){
            cout<< v;
        }
        else if(i<n9+nv){
            cout<<"9";
        }
        else{
            cout<<"0";
        }
    }
}


int main(){
    ll t;
    cin >>t;
    rep(i,0,t){
        ll n;
        cin>>n;
        solve(n);
        cout<<endl;
    }


	return 0;
}