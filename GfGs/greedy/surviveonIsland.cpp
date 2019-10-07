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

void solve(ll s,ll n,ll m){
    if((n*6<m*7 && s>6 ) || m>n ){
        cout <<"-1";
    }
    else{
        // If we can survive then we can 
        // buy ceil(A/N) times where A is 
        // total units of food required. 
        ll days = (m * s) / n; 
        if (((m * s) % n) != 0)    // ceil => upper bound of that number 
            days++; 
        cout << days;
    }
    cout<< endl;
}

int main(){
	ll t;
	cin >>t;
	rep(i,0,t){
		ll s,n,m;
        cin>>s>>n>>m;
        solve(s,n,m);
       
	}


	return 0;
}