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
	ll n,m;
	cin >>n>>m;
	for(ll i= m/n ;i>0;i--){
		if(m%i==0){
			cout<<i;
			break;
		}
	}


	return 0;
}