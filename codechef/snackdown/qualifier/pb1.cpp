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

int main(){
	ll t;
	cin >>t;
	rep(i,0,t){
		ll n,k;
        cin>>n>>k;
        ll arr[n];
        rep(j,0,n){
            cin>>arr[j];
        }
        ll num,ans=0;
        sort(arr,arr+n,greater<int>());
        num = arr[k-1];
        
        rep(j,k-1,n){
            if(arr[j]!=num ) {
                ans = j;
                break;
            }
            else if(j== n-1){
                ans = j+1;
            }
            // cout<< arr[j];
        }

        ans = ans;

        cout << ans<<endl;
	}


	return 0;
}