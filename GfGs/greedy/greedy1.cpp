#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){

    ll n;
    cin >> n;

    ll a[n][2];
    ll num=999999999;
    
    for(ll i = 0; i < n; i++)
    {
        
        for(ll j = 0; j < 2; j++)
        {
            cin >> a[i][j];

            if(i==0 && j!=0 ){
                cout << 0;
                num = a[0][1];
                continue;
            }else if(num>a[i][0]){
                continue;
            }
            else if(num <= a[i][0] && j!=0 ){
                cout << i;
                num = a[i][1];
            }

        }
        



    }
    // cout << num;
    
	

	return 0;
}