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

ll digitSum(ll n){
    ll sum=0;
    ll k=10,l=10;
    while(n!=0){
        sum += n%l;
        n /=k;
        k*=10;
        l*=10;
    }
    return sum;
}

int main(){
	ll t;
	cin >>t;
	rep(i,0,t){
		ll n,d;
        cin>>n>>d;
        
	}


	return 0;
}