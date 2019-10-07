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


void solve(ll n,ll arr[]){
    ll days=0;    
    ll num; // number of people they can tell
    ll flag=0;
    ll index_i=0; // till that all people know
    num = arr[0];
    ll index_f = index_i+num;  
    
    while(flag==0){

        rep(i,index_i+1,index_f+1){
            num+=arr[i];
        } 
        days+=1;

        if(index_f+1>=n){
            cout<<days;
            flag=1;
            break;
        }

        index_i = index_f;
        index_f += num; 

        if(index_f+1>=n){
            flag=1;
            days+=1;
            cout << days;
            break;
        }
    }
}


int main(){
	ll t;
	cin >>t;
	rep(i,0,t){
		ll n ;
        cin>>n;
        ll arr[n];
        rep(i,0,n){
            cin>>arr[i];
        }
        solve(n,arr);
        cout << endl;
	}
	return 0;
}