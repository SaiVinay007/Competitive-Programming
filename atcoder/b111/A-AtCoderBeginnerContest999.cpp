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
	ll t;
	cin >>t;
	ll arr[3];
    ll k=10;
    ll prev=1;
    rep(i,0,3){
        arr[i] = (t%k)/prev;
        k*=10;
        prev *= 10;
    }

    rep(i,0,3){
        if(arr[i]==1){
            arr[i]=9;
        }
        
        else if(arr[i] ==9)
        {
            arr[i]=1;
        }
        
    }
    rep(i,0,3){
        cout<<arr[2-i];
    }


	return 0;
}