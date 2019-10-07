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

ll arr[10000];
ll p[100];

ll primes(ll n){
    p[0] = 2;
    ll num=1;
    rep(i,3,n+1){    
        ll flag=0;
        rep(j,0,num){
            if(i%p[j] == 0){
                break;
            }
            if(j == (num-1)){
                p[num] = i;
                flag = 1;
            }

        }
        if(flag==1){
            num+=1;
        }

    }
    return num;
}


void semiPrimes(ll num){
    ll k = 0;

    rep(i,0,num-1){
        rep(j,i+1,num){
            arr[k] = p[i]*p[j];
            k+=1; 
        }
    }
}

void solve(ll n,ll num){
    ll numbers = ((num-1)*num)/2;

    ll add;
    ll flag=0;
    rep(i,0,numbers-1){
        rep(j,0,numbers){
            add = arr[i]+arr[j];
            if(add == n){
                cout <<"YES";
                flag=1;
                break;
            }
        }
        if(flag==1){
            break;
        }
    }

    if(flag==0){
        cout <<"NO";
    }
}

int main(){
	ll t;
	cin >>t;
	rep(i,0,t){
        ll n;
        cin >>n;
        ll num;
        num = primes(n);
        semiPrimes(num);
        solve(n,num);
        cout<<endl;
	}


	return 0;
}