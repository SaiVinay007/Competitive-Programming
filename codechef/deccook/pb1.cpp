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
        ll d;
        cin>>d;
        ll arr[d][2];
        rep(j,0,d){
            cin>>arr[j][0]>>arr[j][1];
        }
        ll q;
        cin>>q;
        ll brr[q][2];

        rep(j,0,q){
            ll num=0;

            cin>>brr[j][0]>>brr[j][1];
            rep(k,0,d){
                if(arr[k][0]<=brr[j][0]){
                    num+=arr[k][1];            
                }
            }
            if(num>=brr[j][1]){
                cout<<"Go Camp"<<endl;
            }
            else{
                cout<<"Go Sleep"<<endl;
            }
        }


	}


	return 0;
}