#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<stack>
#include<map>
#include<climits>
#include<cmath>
using namespace std;

typedef long long int ll;

int main(){
	ll t;
	cin >>t;
	while(t--){
        ll n;
        cin>>n;
        ll ans[n][n];

        ll i,j;
        i=0;
        j=0;
        ll it=0;
        ll start=0;
        ll num = 1;
        while((i+j)<=2*(n-1)){
            while(i!=n && j != -1){
                ans[i][j]=num;
                i+=1;
                j-=1; 
                num+=1;
            }
            it+=1;
            j = it; 
            if(j>(n-1) || i >(n-1)){
                start+=1;
                j = n-1;
            }
            i = start;
        }

        for(ll i=0;i<n;i++){
            for(ll j=0;j<n;j++){
                cout<< ans[i][j]<<" ";
            }
            cout<<"\n";
        }



        
	}


	return 0;
}