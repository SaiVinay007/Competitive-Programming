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

ll gcd(ll a , ll b){

    if (b>a){
        a = a+b;
        b = a-b;
        a = a-b;
    }
    if ( b==0 ){
        return a;
    }
    else if(b==1){
        return 1;
    }
    

    return gcd(a%b,b);

}

int main(){
	ll n;
	cin >>n;
	
    ll prev,next;
    rep(i,0,n){
        rep(j,i+1,n){
            prev = gcd(i,j);
            next = gcd(i,)
        }
    }


	return 0;
}