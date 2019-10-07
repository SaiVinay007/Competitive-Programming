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
    cin >> t;
    rep(i,0,t){
        ll n;
        cin >> n;
        ll a[n],b[n];

        rep(j,0,n){
            cin >> a[j];
        }
        rep(j,0,n){
            cin >> b[j];
        }
        ll c,d;
        c = sizeof(a)/sizeof(a[0]);
        d = sizeof(b)/sizeof(b[0]);

        sort(a,a+c);
        sort(b,b+c,greater<ll>());
        ll prod =0;
        rep(j,0,n){
            prod += a[j]*b[j];
        }
        cout << prod<<endl;
    }




	return 0;
}