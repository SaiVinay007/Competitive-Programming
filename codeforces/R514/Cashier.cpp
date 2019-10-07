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
	ll n,l,a;
	cin >>n>>l>>a;
    if(n==0){
        ll k;
        k = l/a;
        cout << k;
    }
    else{

        ll t[n],L[n];
        vector < pair<ll,ll> > vec;
	    
        rep(i,0,n){
	    	cin>>t[i]>>L[i];
            vec.push_back(make_pair(t[i],L[i]));
	    }
        
        sort(vec.begin(),vec.end());

        ll br[n+1];
        ll prev=0;
        ll num=0;
    
        rep(i,0,n){
            br[i] = vec[i].first-prev;
            prev = vec[i].first+ vec[i].second;
            if(br[i]>=a){

                num+=br[i]/a;
            }
        }
        
        br[n] = l - (vec[n-1].first + vec[n-1].second);

        if(br[n]>=a){
                num+=br[n]/a;
            }
    cout<< num;

    }

	return 0;
}