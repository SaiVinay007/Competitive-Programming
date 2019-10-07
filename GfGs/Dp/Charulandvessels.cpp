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

ll dp[INT32_MAX] ={-1};


ll solve(ll n,ll arr[]){
	if(n<0){
		return;
	}
	if(n==0){
		cout<<"1";
		return;
	}

	if(dp[n]!=-1){
		return dp[n];
	}
	ll sum;
	rep(i,0,n){

	}
	return 


}


int main(){
	ll t;
	cin >>t;
	rep(i,0,t){
		ll n,k;
        cin >>n>>k;
        ll arr[n];
        rep(j,0,n){
            cin>>arr[i];
        }
        solve(n);
	}


	return 0;
}