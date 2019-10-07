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

ll comlen(ll* arr[]){
    arr[10][]=1;
}

void solve(vector< pair<ll,ll> >vec,ll n,ll k){

    rep(i,0,n-5){
        rep(j,0,5){
            
        }
    }

}


int main()
{
    ll t;
    cin>>t;
    rep(i,0,t){
        ll n,k;
        cin>>n>>k;
        vector< pair<ll,ll> >vec;
        ll l,r;
        rep(j,0,n){
            cin>>l>>r;
            vec.push_back(make_pair(l,r));
            sort(vec.begin(),vec.end());
        }
    }

    return 0;
}