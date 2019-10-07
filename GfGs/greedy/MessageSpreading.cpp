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

	long long t;
	cin >> t;
	for (int i = 0;i<t;i++){
	    long long n;
	    cin >> n;
	    cout << 2*(n-1)<<endl; // each person send his message to one person and he has all the
                               // msgs then the sends all in one msg to each one.
	}
	



	return 0;
}