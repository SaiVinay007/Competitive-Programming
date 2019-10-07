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

const ll MAX = 1000; 

bool isPossible(ll n,ll index,ll sum,ll m,ll arr[],ll dp[][MAX]){

    if(index == n){
        if(sum%m == 0)
            return true;
        return false;
    }

    if(dp[index][sum]!=-1){
        return dp[index][sum];
    }

    bool placeAdd = isPossible(n,index+1,sum+arr[index],m,arr,dp);
    bool placeMinus = isPossible(n,index+1,sum-arr[index],m,arr,dp);

    bool res = (placeAdd||placeMinus);

    dp[index][sum] = res;

    return res;
}

int main(){
	ll t;
	cin >>t;
	rep(i,0,t){
		ll n;
        cin>>n;
        ll arr[n];
        rep(j,0,n){
            cin>>arr[j];
        }
        ll m;
        cin>>m;
        ll dp[n+1][MAX];
        memset(dp,-1,sizeof(dp));
        bool res ;
        res = isPossible(n,0,0,m,arr,dp);

        if(res){
            cout<<"1";
        }
        
        else
        {   
            cout<<"0";
        }
        
        cout<<endl;

	}


	return 0;
}