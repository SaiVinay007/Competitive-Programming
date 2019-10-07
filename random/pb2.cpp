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

void effective(ll e[],ll l,ll r,ll p1,ll p2, ll n){
    vector <ll> v;
    ll num=0;
    rep(i,0,n){
        if(e[i]>= l && e[i] <= r){
            v.push_back(e[i]);
            // cout << e[i]<< "   ";
            num+=1;
        }
    }
    if (num==0){
        cout << "-1";
    }
    else{
        sort(v.begin(), v.end());
        // cout << num<<endl;
        rep(i,0,num){
            // cout << v[i]<<" ";
        }
        ll m = 1000000007;
        ll sum = 0;
        rep(i,0,num){
            rep(j,i,num){
                ll a,b,c;
                a = (((pow(v[j], p1))) - ((pow(v[i],p2))));
                if(i==j){
                    b = 0;
                }
                else{
                b = j-i-1;

                }
                c = (pow(2,b));
                sum = (sum + (c*a))%m;
                cout << v[j] <<"  "<<v[i]<<"  " << a <<" "<<b<<" "<<c<<" "<<c*a<<" "<<sum<<"***";
            }
        }
        cout<<sum;
    }
    cout <<endl;
}



int main(){
	ll n;
	cin >>n;
    ll e[n];
    rep(i,0,n){
        cin>>e[i];
    }
    ll q;
    cin>>q;
    rep(i,0,q){
        ll l,r,p1,p2;
        cin>>l>>r>>p1>>p2;
        effective(e,l,r,p1,p2,n);
    }
	


	return 0;
}