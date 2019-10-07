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
	rep(i,0,t){
        string n;
        cin>>n;
        ll num = n.length();
        string str;
        ll c;
        c = stoi(n);
        rep(j,0,num){
            string s1,s2,s3;
            ll a,b,d;
            d = pow(10,num-j);
            a = c/d;
            b = c%d;
            s1 = to_string(b);
            s2 = to_string(a);
            if(a!=0 && b !=0){
                s3 = s1+s2;
            }
            else if(a==0 && b !=0){
                s3 = s1;
            }
            else if(a!=0 && b==0)
            {
                s3 = s2;
            }
            
            str = str + s3;
        }
        
        ll m = 1000000007;
        ll ans=0;
        ll num1 = str.length();
        rep(j,0,num1){
            ans = (10*ans + (int)str[j] - '0')%m;
        }
        cout<<ans<<endl;
	}


	return 0;
}