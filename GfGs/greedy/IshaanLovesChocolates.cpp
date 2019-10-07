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
    cin>>t;

    rep(i,0,t){
        ll n;
        cin >> n;
        ll a[n];
        rep(j,0,n){
            cin >> a[j];
        }

        ll left, right;
        left =0;
        right = n-1;

        while(left!=right){
            if (a[left]>=a[right]){
                left += 1;
            }
            else if(a[left]<a[right]){
                right -= 1;
            }

        }
        cout << a[left]<< endl;
    }



	return 0;
}