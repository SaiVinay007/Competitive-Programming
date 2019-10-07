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


void solve(ll sol[],vector< pair<ll,ll> > vec,ll num,ll n,ll m){

    rep(i,0,num-1){
        rep(j,i+1,num){
            ll x1,x2,y1,y2;
            x1 = vec[i].first;
            y1 = vec[i].second;
            x2 = vec[j].first;
            y2 = vec[j].second;
            ll d;
            d = abs(x2-x1)+abs(y2-y1);
            sol[d]+=1;
        }
    }
    rep(i,1,n+m-1){
        cout<< sol[i]<<" ";
    }

}


int main()
{
    ll t;
    cin>>t;
    rep(i,0,t){

        ll n,m;
        cin>>n>>m;

        vector <pair<ll,ll>> vec;
        ll num=0;

        string s;       
        ll sol[n+m-1];

        rep(j,0,n){
            cin >> s;
            rep(k,0,m){
                if(s[k]=='1'){
                    vec.push_back(make_pair(j,k));
                    num+=1;
                    /*rep(l,0,num){
                        ll x1,x2,y1,y2;
                        x1 = vec[i].first;
                        y1 = vec[i].second;
                        x2 = vec[j].first;
                        y2 = vec[j].second;
                        ll d;
                        d = abs(x2-x1)+abs(y2-y1);
                        sol[d]+=1;
                    }*/
                }
            }
        }
        rep(j,1,n+m-1){
            sol[j]=0;
        }
        solve(sol,vec,num,n,m);
        cout << endl;
            
    }

    return 0;
}
