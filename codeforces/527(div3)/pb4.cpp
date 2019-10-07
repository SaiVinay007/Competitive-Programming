#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	ll n;
    cin>>n;
    ll arr[n];

    for(ll i=0;i<n;i++)
    {   
        cin>>arr[i];
    }    
    
    ll flag = 0;
    ll curr;
    for(ll i=0;i<n;i++){
        arr[i]++;
        // curr = arr[i];
        cout<<arr[i];
        
    }   

    if(flag==0)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }



	return 0;
}
