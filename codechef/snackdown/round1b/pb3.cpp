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

ll m = 1000000007;

void calculate(ll arr[],ll n,ll k){
    ll ans=1;
    rep(i,0,k){
        ans=((ans%m)*((arr[i]*arr[i])-arr[i])%m)%m;
    }
    cout << ans;
}

void solve(ll n,ll k){
    ll arr[k];
    
    if(k*(k+1)/2 > n){
        cout << "-1";
    }
    else{
        rep(i,0,k){
            arr[i]=i+1+((n- (k*(k+1)/2))/k);
        }
        ll num = (n- (k*(k+1)/2))%k;
        ll j=k-1;
        while(num>0){
            arr[j]+=1;
            j-=1;
            num-=1;
        }
        calculate(arr,n,k);    
    }
}


int main()
{
    ll t;
    cin>>t;
    rep(i,0,t){
        ll n,k;
        cin>>n>>k;
        solve(n,k);
        cout << endl;
    }

    return 0;
}



