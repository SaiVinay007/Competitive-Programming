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

int main()
{
    ll t;
    cin>>t;
    rep(i,0,t){
        ll n;
        cin>>n;
        ll a[n];
        ll flag=0;
        ll ind=-1;
        ll b=0;
        rep(j,0,n){
            cin>>a[j];
            if(a[j]>=b){
                b=a[j];
            }
            else if(flag==0){
                ind=j;
                flag=1;
            }
        }
        if(flag==0){
            cout<<"YES";
        }
        else{
            ll c[n];
            
            rep(j,ind,n){
                c[j-ind]=a[j];
            }
            rep(j,0,ind){
                c[n-ind+j] = a[j];
            }
    
            sort(a,a+n);
            int s=0;
            rep(j,0,n){
                if(a[j]!=c[j]){
                    cout<<"NO";
                    s=1;
                    break;
                }
            }
            if(s==0){
                cout<<"YES";
            }
        }
        cout<<endl;
        
    }

    return 0;
}
