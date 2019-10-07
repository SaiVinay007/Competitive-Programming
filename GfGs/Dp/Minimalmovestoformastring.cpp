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

ll solve(string s){
    ll len  =  s.length();
    string s1,s2;
    if(len==1){
        return 1;
    }
    if(len%2==0){
        s1 = s.substr(0,len/2);
        s2 = s.substr(len/2);
        if (s1==s2){
            return solve(s1) + 1 ;
        }
        else{
            s = s.substr(0, s.size()-1);
            return solve(s)+1;
        }
        
    }

    else{
        s = s.substr(0,s.size()-1);
        return solve(s)+1;
    }

    return 0;

}

int main(){
	ll t;
	cin >>t;
	rep(i,0,t){
		string s;
        cin >> s;
        ll n;
        n=solve(s);
        cout<<n<<endl;
	}


	return 0;
}