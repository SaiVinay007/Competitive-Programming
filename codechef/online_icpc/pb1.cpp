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


ll solve(ll arr[],ll n,ll k){
    sort(arr,arr+n);

    ll i=0;
    while(arr[i]<=k){
        i+=1;
        if(i==n){
            break;
        }
    }

    ll flag=0;
    
    ll num = 0;
    
    while(i < n){
    
        arr[i]-=num;

        num = arr[i]-k;
        if(arr[i]>k && i!=n-1){
            arr[i]-=num;
        }
        i+=1;

    }

    ll sum=0;
    rep(j,0,n){
        sum+=arr[j];
    }
    return sum;

}

int main()
{
    ll t;
    cin>>t;
    rep(i,0,t){
        ll n,k;
        cin>>n>>k;
        ll arr[n];
        rep(j,0,n){
            cin>>arr[j];
        }
        ll sum;
        sum = solve(arr,n,k);
        cout <<sum<< endl;
    }

    return 0;
}
