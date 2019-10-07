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


ll gcd(ll a, ll b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
  
// Function to find gcd of array of 
// numbers 
ll findGCD(ll arr[], ll n) 
{ 
    ll result = arr[0]; 
    rep(i,0,n){
        result = gcd(arr[i], result); 
    }
    return result; 
} 


void solve(ll a[],ll n){
    ll gcd = findGCD(a,n);
    if (gcd==1){
        cout<<"0"<<endl;
        rep(i,0,n){
            cout<<a[i]<<" ";
        }
    }
    else{
        ll b[n-1];
        rep(i,0,n-1){
            b[i] = a[i+1];
        }
        gcd = findGCD(b,n-1);
        if(gcd==50){
            a[0] = 49;
        }
        else{
            a[0] = gcd+1;
        }
        cout<<"1"<<endl;
        rep(i,0,n){  
            cout<<a[i]<<" ";   
        }
    }
}

int main()
{
    ll t;
    cin>>t;
    rep(i,0,t){
        ll n;
        cin>>n;
        ll a[n];
        rep(j,0,n){
            cin >>a[j];
        }
        solve(a,n);
        cout<<endl;
    }

    return 0;
}
