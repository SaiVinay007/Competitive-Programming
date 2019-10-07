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

void solve(ll d,ll n){

    

}


int main(){
	ll t;
	cin >>t;
	rep(i,0,t){
        ll p1,p2,k;
        cin>>p1>>p2>>k;
        ll flag=0;

        if(((p1+p2)/k)%2==0){
            flag=0;
        }
        else{
            flag=1;
        }
        if (flag==0){
            cout<<"CHEF"<<endl;
        }
        
        else
        {
            cout<<"COOK"<<endl;
        }
        

	}


	return 0;
}