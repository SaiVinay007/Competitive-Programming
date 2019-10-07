#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<stack>
#include<map>
#include<climits>
#include<cmath>
#include<iomanip>
using namespace std;

typedef long long int ll;

int main(){
	ll n,k;
    cin>>n>>k;
    ll arr[n][k];
    ll tot[n];
    for(ll i=0;i<n;i++){
        tot[i]=0;
        for(ll j=0;j<k;j++){
            cin>> arr[i][j];
            tot[i]+=arr[i][j];
        }
    }
    double probag[n][k];
    for(ll i=0;i<n;i++){
        for(ll j=0;j<k;j++){
            if(i==0){
            probag[i][j]=(arr[i][j]*(1.0))/tot[i];
            }
            else{
                probag[i][j] = (probag[i-1][j]*(arr[i][j]+1)*(1.0))/(tot[i]+1) + (1-probag[i-1][j])*(arr[i][j]*(1.0))/(tot[i]+1);
            }
        }
    }

    for(ll i=0;i<k;i++){
        cout <<setprecision(8)<< probag[n-1][i]<<" ";
    }


	return 0;
}