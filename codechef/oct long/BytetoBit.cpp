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
		ll n;
        cin>>n;

        ll num;
        if(n%26==0){
            num = (n/26);
        }else{
            num = (n/26) +1;
        }

        ll k = n - ((num-1)*26);
        ll flag=-1;

        if(0<k && k<=2){
            flag=0;
        }
        else if(2<k && k<=10){
            flag=1;
        }
        else{
            flag=2;
        }
        ll value = pow(2,(num-1));
        
        // *** if pow(2,(num-1)) is directly used in cout then its showing error; may be due to default 
        // datatype overflow in cout storing process;

        if(flag==0){
            cout<<value<<" "<<"0"<<" "<<"0"<<endl;
        }
        else if(flag==1){
            cout<<"0"<<" "<<value<<" "<<"0"<<endl;
        }
        else if(flag==2){
            cout<<"0"<<" "<<"0"<<" "<<value<<endl;
        }

	}


	return 0;
}