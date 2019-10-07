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

    ll n,s;
    cin >> n>>s;

    ll min = 2- (n*(n+1)/2);
    ll max = n*(n+1)/2;

    if (s>max || s< min){
        cout << "Impossible";
    }
    



	return 0;
}