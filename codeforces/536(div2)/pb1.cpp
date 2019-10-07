#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	    
    ll n;
    cin>>n;

    

    ll a[n][n] = {0} ;
    ll num = 0;

    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            char c;
            cin>>c;

            if(c=='.')
            {
                a[i][j] = 1;
            }
            else
            {
                a[i][j] = 2;
            }            
        }
    }

    for(ll i=1;i<n-1;i++)
    {
        for(ll j=1;j<n-1;j++)
        {   
                if(a[i-1][j-1]==2 && a[i-1][j+1]==2 && a[i+1][j+1]==2 && a[i+1][j-1]==2)
                {
                    num+=1;
                }
                      
        }
    }

    if(n<3)
    {
        cout<<"0";
    }
    else
    {
        cout<<num;
    }
    

	return 0;
}