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



void solve(ll arr[],ll n,ll m,ll k, ll l ){
    ll ti[n+1];
    rep(i,0,n+1){ti[i]=99999999;}

    rep(i,0,n+1){
        if(arr[i]<=k){
            if(arr[i]<l*(m+i+1)){
                ti[i] = l*(m+i+1) -arr[i];  
            }
            else{ ti[i]=0;}
        }
        else{
            if(k<l*(m+i+1)){
                ti[i] = l*(m+i+1) - k;
            }
            else{ti[i] = 0;}
            break;
        }   
    }

    
    ll* val ;
    val = min_element(ti,ti+n+1);
    cout << *val<<endl;

}


int main()
{
    ll t;
    cin>>t;
    rep(i,0,t){
        ll n,m,k,l;
        cin>>n>>m>>k>>l;
        ll arr[n];
        rep(i,0,n){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        solve(arr,n,m,k,l);

    }

    return 0;
}