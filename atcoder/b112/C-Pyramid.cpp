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
	ll n;
	cin >>n;
    ll arr[n][3];
    ll cx,cy,h,x=0;
	rep(i,0,n){
		cin >> arr[i][0]>>arr[i][1]>>arr[i][2];
        if(! x && arr[i][2] ) x= i;

    }
    ll f=0;
    rep(j,0,101){
        rep(k,0,101){
            ll num = 0;
            ll flag=0;
            ll nump=0; 
            ll prevh = -1;
            
            h = arr[x][2] + abs(arr[x][0]-j) + abs(arr[x][1]-k);
      
            rep(i,0,n){    

            if(arr[i][2] != max ( (h - abs(arr[i][0]-j) - abs(arr[i][1]-k)) ,(ll) 0)){
                flag = 1; 
                break;
                } 
            }  

            if(flag==0){
                cout << j<<" "<<k<<" "<<h;
                f=1;
                break;
            }

        }


        if(f==1){
            break;
        }
           
    }






	return 0;
}