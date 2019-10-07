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

ll m = 1000000007;
ll num1=0,num2=0;

void numbers(ll n, vector <ll> vec){
    ll a,b;
    num1=1;
    num2=1;
    a = vec[n-1];
    ll i=2;
    ll flag = 0;
    while(flag==0){
        if(vec[n-i]==a){
            num1+=1;
            i+=1;
        }
        else{
            flag=1;
        }
    }
        
    if(num1==1){
        flag=0;
        b = vec[n-i];
        i+=1;
        while(flag==0){
            if(vec[n-i]==b){
                num2+=1;
                i+=1;
            }
            else{
                flag=1;
            }
        }
    }
}

ll solve(ll n,vector<ll> vec){
    ll p,q;
    if(n==2){
        return 1;
    }

    else{
        numbers(n,vec);
        // Dont directly use num1 and num2; as num1 and num2 are changing in between and they are global 
        // if we change in between they change
        p = num1;
        q = num2;
        
        if(p>1){
            vec.pop_back();
            vec.pop_back();
            return ((((p)*(p - 1))/2)*(solve(n-2,vec))%m)%m;
        }
        else if(p==1 && q > 1){
            vec.pop_back();
            vec.pop_back();
            return ((q)*((solve(n-2,vec)))%m)%m;
        }
        else if(p==1 && q==1){
            vec.pop_back();
            vec.pop_back();
            return (solve(n-2,vec)%m);
        }
    }


}


int main(){
	ll t;
	cin >>t;
	rep(i,0,t){
		ll n;
        cin >>n;
        vector <ll> vec;
        rep(j,0,n){
            ll a;
            cin>>a;
            vec.push_back(a);
        }
        sort(vec.begin(),vec.end());

        ll k = solve(n,vec);
        cout <<k<<endl;
	}


	return 0;
}