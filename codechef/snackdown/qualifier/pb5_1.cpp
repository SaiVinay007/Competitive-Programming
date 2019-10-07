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
ll arr[100000],j;

void numbers(ll n,vector<ll> vec,ll arr[]){
    ll a = vec[0];
    rep(i,0,n){
        arr[i]=1;
    }
    j=0;
    rep(i,1,n){
        if(a==vec[i]){
            arr[j]+=1;
        }
        else{   
            a=vec[i];
            j+=1;
        }
    }
}

ll solve(ll n , vector<ll> vec){
    
    ll flag =0;
    ll val=1;
    while(flag==0){
        if(n==2){
            flag=1;
            val*=1;
        }
        else{
            if(arr[j]==0 && arr[j-1]==0){
                j-=2;
            }
            else if(arr[j]==0){
                j-=1;
            }
            
            if(arr[j]>1){
                vec.pop_back();
                vec.pop_back();
                if(arr[j]%2==0){
                val*= ((arr[j]-1 ))%m;
                }
                else{
                    val*=(arr[j])%m;
                }
                
                arr[j]-=2;

            }
            else if(arr[j]==1 && arr[j-1] > 1){
                vec.pop_back();
                vec.pop_back();
                val*=((arr[j-1])%m);
                arr[j]-=1;
                arr[j-1]-=1;

            }
            else if(arr[j]==1 && arr[j-1]==1){
                vec.pop_back();
                vec.pop_back();
                val*=1;
                arr[j]-=1;
                arr[j-1]-=1;
            }        
            n-=2;
        }
    }
return val;

}


int main(){
	ll t;
	cin >>t;
	rep(i,0,t){
		ll n;
        cin >>n;
        vector <ll> vec;
        rep(k,0,n){
            ll a;
            cin>>a;
            vec.push_back(a);
        }
        sort(vec.begin(),vec.end());
        numbers(n,vec, arr);

        ll val = solve(n,vec);
        cout <<val<<endl;
	}


	return 0;
}