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



void solve(ll arr[],ll n){
    ll lis[n];
    rep(i,0,n){
        lis[i]=1;
    }

    rep(i,1,n){
        rep(j,0,i){
            if(arr[j]<arr[i]){
                lis[i] = max(lis[i],lis[j]+1);
            }
        }
    }
    
    // cout << max_element(lis,lis+n);
    sort(lis, lis +n);
    cout<<lis[n-1]<<endl;

}


int main(){

    ll t;
    cin>>t;    
    
    rep(i,0,t){
        ll n;
        cin>>n;
        ll arr[n];
        
        rep(j,0,n){
        
            cin>>arr[j];
        
        }
        
        solve(arr,n);
    }
	return 0;
}