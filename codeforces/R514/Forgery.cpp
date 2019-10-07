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
	ll n,m;
	cin >>n>>m;
	
    ll arr[n][m];
   
    char c;
    rep(i,0,n){
        rep(j,0,m){
            cin>>c;
            if(c=='#'){
                arr[i][j]=1;
            }
            else{
                arr[i][j]=0;
            }
        }
    }

    rep(i,1,n-1){
        rep(j,1,m-1){
            if( 
            (arr[i-1][j+1]==1 || arr[i-1][j+1]==2) && 
            (arr[i][j+1]==1 || arr[i][j+1]==2) &&
            (arr[i+1][j+1]==1 || arr[i+1][j+1]==2) &&
            (arr[i-1][j]==1 || arr[i-1][j]==2) &&
            (arr[i+1][j]==1 || arr[i+1][j]==2) &&
            (arr[i-1][j-1]==1 || arr[i-1][j-1]==2) && 
            (arr[i][j-1]==1 || arr[i][j-1]==2 )&& 
            (arr[i+1][j-1]==1 || arr[i+1][j-1]==2) ){
               
                arr[i-1][j+1] = 2;
                arr[i][j+1] = 2;
                arr[i+1][j+1] = 2;
                arr[i-1][j] = 2;
                arr[i+1][j] = 2;
                arr[i-1][j-1] = 2;
                arr[i][j-1] = 2;
                arr[i+1][j-1] = 2;

            }
        }
    }

    ll flag=0;

    rep(i,0,n){
        rep(j,0,m){
            if(arr[i][j]==1){
                flag=1;
            }
        }
    }

    if(flag==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

	return 0;
}