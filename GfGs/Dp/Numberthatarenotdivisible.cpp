#include <bits/stdc++.h>
using namespace std;

typedef long long ll; 

void solve(ll n,ll arr[]){
    
    for(ll i = 0 ; i< n;i++){
        arr[i] = i+1;
    }
    ll sum =0;
    for(ll i = 0 ; i< n;i++){
        if(arr[i]%2 == 0 || arr[i]%3 == 0 || arr[i]%5 == 0 || arr[i]%7 == 0){
            arr[i] = 0;
        }
        if(arr[i]!=0){
            sum+=1;
        }
    }
    cout << sum<<endl;
}

int main() {
	ll t;
	cin>>t;
	for(ll i=0;i<t;i++){
	    ll n;
	    cin>>n;
        ll arr[n];
	    solve(n,arr);
	}
	
	return 0;
}