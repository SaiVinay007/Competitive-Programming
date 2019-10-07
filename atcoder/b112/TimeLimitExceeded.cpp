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
	ll n,t;
	cin >>n>>t;
    ll arr[n][2];
    ll min = 999999;
	rep(i,0,n){
		cin>> arr[i][0]>>arr[i][1];
        if(arr[i][1]<=t){
            if(arr[i][0]<min){
                min = arr[i][0];
            }
        }
    }
    if(min==999999){
        cout << "TLE";
    }
    else{
        cout<<min;
    }


	return 0;
}