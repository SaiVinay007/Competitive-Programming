#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin>>n;

    ll val;
    val = (n*(n+1))/2;
    if(val%2==0)
    {
        cout<<"0";
    }
    else
    {
        cout<<"1";
    }

	return 0;
}