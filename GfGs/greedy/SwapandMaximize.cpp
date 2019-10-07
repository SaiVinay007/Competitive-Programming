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
        ll a[n];

        rep(j,0,n){
            cin >> a[j];
        }   
        int s = sizeof(a)/sizeof(a[0]);
        sort(a,a+s);
        ll sum = 0;
        
        // as each element involves in substraction with two elements
        rep(j,0,n/2){
            sum -= (2*a[j]);
            sum += (2* a[n-j-1]);
        }
    
        cout << sum<<endl;

    }



	return 0;
}