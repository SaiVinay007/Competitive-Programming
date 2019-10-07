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

void solve(ll n, ll a[],ll b[]){

    ll arr[n];
    rep(i,0,n){
        arr[i] = b[i] - a[i];
    }
    ll flag=0;
    ll num;
    
    rep(i,0,n-2){

        num = arr[i];
        if(num!=0){   
        rep(j,0,3){
            arr[i+j] -= (j+1)*num;
        }
        
        }
        if(num<0){
            flag = 1;
            break;
        }
    }
    rep(i,0,n){
        if(arr[i]!=0){
            flag=1;
            cout<<"NIE";
            break;
        }
    }
    if(flag==0){
        cout << "TAK";
    }


    
}


int main(){
	ll t;
	cin >>t;
	rep(i,0,t){
		ll n;
        cin>>n;
        ll a[n],b[n];
        rep(i,0,n){
            cin>>a[i];
        }
        rep(i,0,n){
            cin>>b[i];
        }
        solve(n,a,b);
        cout << endl;

	}


	return 0;
}