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

void solve(ll a, ll b){
    ll num = sqrt(a);
    ll min = 99999999999;
    for(ll i = 1; i<=num; i++){
        ll x,y,temp1,temp2;
        if(a%i == 0 ){
            x = i;
            y = a/i;
            temp1 = x*b + y;
            temp2 = y*b + x;

            
            if(temp1<min  && y%b!=0 ){
                min = temp1;
            }
            if(temp2<min && x%b!=0){
                min  = temp2;
            }
        }
    }
    cout << min;
}


int main(){
	ll a,b;
	cin >>a>>b;
    solve(a,b);

	return 0;
}